from utils.input import InputUtils
from utils.utils import (
    codechef_contest_generator,
    codeforces_contest_generator,
    google_code_jam_contest_generator,
    google_hash_code_contest_generator,
)

function_map = {
    "Codechef": {
        "execute": codechef_contest_generator,
        "path": "/",
        "template": "template.cpp"
    },
    "Codeforces": {
        "execute": codeforces_contest_generator,
        "path": "/",
        "template": "template.cpp"
    },
    "Google Hash Code": {
        "execute": google_hash_code_contest_generator,
        "path": "/",
        "template": "template.cpp"
    },
    "Google Code Jam": {
        "execute": google_code_jam_contest_generator,
        "path": "/",
        "template": "template.cpp"
    },
}

def main():
    try:
        platform = InputUtils.menu(list(function_map.keys()), "Platform")
        number_of_problems = input("Number of problems? ")
        
        function_map[platform]["execute"](number_of_problems)

    except:
        print("Error executing script!")


if __name__ == "__main__":
    main()
