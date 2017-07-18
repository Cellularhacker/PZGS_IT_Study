#include <iostream>
#define LINEPAD "========================================\n"

void initFunc();
double Calculating(double _num1, double _num2, char _op);

int main(void) {
    double num1, num2;
    char op;
    double result;

    while(1) {
        initFunc();
        std::cin>>num1>>op>>num2;
        result = Calculating(num1, num2, op);
        std::cout<<"결과: "<<result<<std::endl;
    }
}

void initFunc() {
    std::cout<<LINEPAD<<std::endl;
    std::cout<<"계산할 수식(+,-,*,/,%) <Ctrl + C로 중단>\n=> ";
}

double Calculating(double _num1, double _num2, char _op) {
    double _result;
    switch(_op) {   //비교하는 방법은 char값을 비교하여 확인
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
            _result = (int)_num1 % (int)_num2;
            break;
        default:
            _result = 0;
            break;
    }

    return _result;
}