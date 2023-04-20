from utils.input import menu
from utils.contest import create_contest

platform_meta_map = {
    "Codechef": {"template": "template_with_test_cases.cpp"},
    "Codeforces": {"template": "template_test_case_number_output.cpp"},
    "Google Hash Code": {"template": "template_without_test_cases.cpp"},
    "Google Code Jam": {"template": "template_without_test_cases.cpp"},
}


def main():
    try:
        platform = menu(list(platform_meta_map.keys()), "Platform")
        number_of_problems = input("Number of problems? ")
        contest_code = input("Contest code? ")

        create_contest(
            contest_code, number_of_problems, platform_meta_map[platform], platform
        )
        print(f"Created contest {contest_code }")
    except:
        print("Error executing script!")


if __name__ == "__main__":
    main()
