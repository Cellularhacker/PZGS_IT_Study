#include <stdio.h>
#define LINEPAD "========================================\n"

void initFunc();
double Calculating(int _num1, int _num2, int _op);

int main(void) {
    int num1, num2;
    char op;
    double result;

    while(1) {
        initFunc();
        scanf("%d %c %d", &num1, &op, &num2);
        result = Calculating(num1, num2, (int)op);
        printf("결과: %f\n", result);
    }
}

void initFunc() {
    printf(LINEPAD);
    printf("계산할 수식(+,-,*,/,%) <Ctrl + C로 중단>\n=> ");
}

double Calculating(int _num1, int _num2, int _op) {
    double _result;
    switch(_op) {   //비교하는 방법은 ASCII코드 값을 이용하여 값이 일치 하는지 확인하게 됨.
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