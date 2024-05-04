import sys

def add(x, y):
    return x + y
def sub(x, y):
    return x - y
def multi(x, y):
    return x * y
def div(x, y):
    result = 0
    try:
        result = x / y
    except ZeroDivisionError:
        error_message = "number not dividible by zero!!!!!"
        print(error_message.upper())
    return result

while True:
    try:
        number_1 = int(sys.argv[1])
        operator = sys.argv[2]
        number_2 = int(sys.argv[3])
        break
    except ValueError:
        print("only allows calculations on Intgers")
print("\n")
if operator == "+":
    print(f"result = {add(number_1, number_2)}")
elif operator == "-":
    print(f"result = {sub(number_1, number_2)}")
elif operator == "*":
    print(f"result = {multi(number_1, number_2)}")
elif operator == "/":
    print(f"result = {div(number_1, number_2)}")
else:
    print("Invalid Operator")

