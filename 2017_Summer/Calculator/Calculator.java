import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner();
        int num1, num2;
        char op;
        double result;

        while(true) {
            num1 = scanner.nextInt();
            op = scanner.next().charAt(0);
            num2 = scanner.nextInt();
            result = Calculating(num1, num2, op);
            System.out.println("결과: " + result);
        }
    }

    void paddingFunc() {
        System.out.println("========================================");
        System.out.println("계산할 수식(+,-,*,/,%) <Ctrl + C로 중단>");
        System.out.print("=> ");
    }

    static double Calculating(int _num1, int _num2, char _op) {
        double _result;

        switch(_op) {   //비교하는 방법은 char값 끼리 비교하여 확인.
            case '+':
                _result = _num1 + _num2;
                break;
            case '-':
                _result = _num1 - _num2;
                break;
            case '*':
                _result = _num1 * _num2;
                break;
            case '/':
                _result = _num1 / _num2;
                break;
            case '%':
                _result = _num1 % _num2;
                break;
            default:
                _result = 0;
                break;
        }

        return _result;
    }
}