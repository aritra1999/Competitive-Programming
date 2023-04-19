import os



def generate_contest(contest_code, number_of_problems, contest_meta, platform):
    create_dir_structure(platform, contest_code)


def create_dir_structure(platform, contest_code):

    contest_dir = f"{platform}/{contest_code}"

    try: 
        check_and_create_dir(platform)
        check_and_create_dir(contest_dir)
    except: 
        print("Error creating dir")


def check_and_create_dir(dir):    
    if not os.path.exists(dir):
        os.mkdir(dir)