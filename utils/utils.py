import os

def generate_contest(contest_code, number_of_problems, contest_meta, platform):
    BASE_PATH = f"{platform}/{contest_code}"
    os.mkdir(BASE_PATH),
