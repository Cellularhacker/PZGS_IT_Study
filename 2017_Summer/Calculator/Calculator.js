var rs = require("readline-sync");
var num1 = rs.question("num1: ");
var op = rs.question("연산자: ");
var num2 = rs.question("num2: ");
var result;

switch (op) {
    case "+":
        result = parseFloat(num1) + parseFloat(num2);
        break;
    case "-":
        result = parseFloat(num1) - parseFloat(num2);
        break;
    case "*":
        result = parseFloat(num1) * parseFloat(num2);
        break;
    case "/":
        result = parseFloat(num1) / parseFloat(num2);
        break;
}

console.log('결과: ' + result)

if (!num1 || !num2) {
    console.log("Please enter a valid number");
}