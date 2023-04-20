import os


def create_dir_structure(platform: str, contest_code: str) -> str:
    contest_dir = f"{platform}/{contest_code}"
    try:
        check_and_create_dir(platform)
        check_and_create_dir(contest_dir)
    except:
        print("Error creating dir!")
        exit()

    return contest_dir


def check_and_create_dir(dir: str) -> None:
    if not os.path.exists(dir):
        os.mkdir(dir)


def create_problem_files(
    number_of_problems: int, template_file: str, contest_dir: str
) -> None:
    problems = list(map(chr, range(97, 97 + int(number_of_problems))))
    try:
        print(f"Using template: template/{template_file}")
        template = open(f"template/{template_file}", "r").read()
    except:
        print("Error reading template!")
        exit()

    for problem in problems:
        print(f"Creating files for problem: {problem}")
        create_and_write_to_file(
            f"{contest_dir}/{problem}.cpp", template.replace("PROBLEM_NAME", problem)
        )
        create_and_write_to_file(f"{contest_dir}/{problem}.in")


def create_and_write_to_file(file_path: str, content="") -> None:
    try:
        with open(file_path, "w") as file:
            file.write(content)
            file.close()
    except:
        print(f"Error writing file: {file_path}")
