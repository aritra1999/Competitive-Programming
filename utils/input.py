def menu(inputFields: list[str], property: str) -> str: 
    print(f"Choose {property}")
    for index, inputField in enumerate(inputFields):
        print(f"{index + 1}: {inputField}")

    try: 
        return inputFields[int(input(f"Choice: ")) - 1]
    except:
        retry_input = input("Invalid input, retry? (y/n): ")
        if retry_input == "Y" or retry_input == "y": menu(inputFields, property)
        else: exit(0)
