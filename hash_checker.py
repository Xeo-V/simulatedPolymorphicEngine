import os
import hashlib
import json
from datetime import datetime

def calculate_hash(filename):
    sha256_hash = hashlib.sha256()
    with open(filename, "rb") as f:
        for byte_block in iter(lambda: f.read(4096), b""):
            sha256_hash.update(byte_block)
    return sha256_hash.hexdigest()

def main():
    target_directory = "D:\\github projects\\polymorphicEngine"  # Replace with the path where your .exe files are located
    output_json = "hashes.json"

    # Load existing hashes if file exists
    if os.path.exists(output_json):
        with open(output_json, 'r') as f:
            hash_list = json.load(f)
    else:
        hash_list = []

    for root, dirs, files in os.walk(target_directory):
        for file in files:
            if file.endswith('.exe'):
                filepath = os.path.join(root, file)
                file_hash = calculate_hash(filepath)
                timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
                
                hash_entry = {
                    "filename": file,
                    "hash": file_hash,
                    "timestamp": timestamp
                }

                hash_list.append(hash_entry)

    # Save to JSON
    with open(output_json, 'w') as f:
        json.dump(hash_list, f, indent=4)

if __name__ == "__main__":
    main()
