while True:
    print("========================================")
    print("계산할 수식(+,-,*,/,%) <Ctrl + C로 중단>")
    
    result = 0.0;

    num1 = int(input("num1:"))
    sel = input("연산자:")
    num2 = int(input("num2:"))

    if(sel == "+"):
        result = (num1 + num2)
    elif(sel == "-"):
        result = (num1 - num2)
    elif(sel == "*"):
        result = (num1 * num2)
    elif(sel == "/"):
        result = (num1 / num2)
    elif(sel == "%"):
        result = (num1 % num2)
    else:
        print("Wrong input, please input again")
        continue

    print("결과: ", result)