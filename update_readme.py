import os
import re

README_PATH = 'README.md'
EXCLUDE_DIRS = {'.git', '.github', 'scripts', 'assets', '.vscode'}

def get_stats():
    stats = {}
    total = 0
    for folder in sorted(os.listdir('.')):
        if os.path.isdir(folder) and folder not in EXCLUDE_DIRS:
            # Clean up names: "01_Arrays" -> "Arrays", "03_Sliding_Window" -> "Sliding Window"
            display_name = re.sub(r'^\d+_', '', folder).replace('_', ' ')
            items = [p for p in os.listdir(folder) if not p.startswith('.')]
            count = len(items)
            
            stats[display_name] = count
            total += count
    return stats, total

def update_readme():
    stats, total = get_stats()
    
    # Build the new content
    new_content = f"\n![DSA Progress](https://img.shields.io/badge/Problems_Solved-{total}-blue)\n\n"
    new_content += "This repository contains my solutions to Data Structures and Algorithms problems solved during preparation.\n\n"
    new_content += "---\n\n"
    new_content += "## 📊 Progress Tracker\n\n"
    new_content += "| Topic | Problems Solved |\n"
    new_content += "|------|-----------------|\n"
    for topic, count in stats.items():
        new_content += f"| {topic} | {count} |\n"
    new_content += "\n"
    
    with open(README_PATH, 'r', encoding='utf-8') as f:
        content = f.read()
        
    # The script looks for EXACTLY these strings
    start_tag = r'<!-- Start of automation -->'
    end_tag = r'<!-- End of automation -->'
    
    # SAFETY LOCK: Only proceed if BOTH tags exist
    if re.search(start_tag, content) and re.search(end_tag, content):
        pattern = re.compile(f'({start_tag}).*?({end_tag})', re.DOTALL)
        updated_content = pattern.sub(rf'\1{new_content}\2', content)
        
        with open(README_PATH, 'w', encoding='utf-8') as f:
            f.write(updated_content)
        print(f"✅ README safely updated! Total solved: {total}")
    else:
        print("❌ ERROR: Fences not found! You MUST add and to your README.")

if __name__ == '__main__':
    update_readme()