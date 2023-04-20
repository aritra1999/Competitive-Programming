import os
from utils.dir import create_dir_structure, create_problem_files

def create_contest(contest_code, number_of_problems, contest_meta, platform):
    contest_dir = create_dir_structure(platform, contest_code)
    create_problem_files(number_of_problems, contest_meta["template"], contest_dir)