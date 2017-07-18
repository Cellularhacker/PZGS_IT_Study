using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 
namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            string num1, num2, op;
            initFunc();
            
            Console.WriteLine("Hello, world!");
        }

        static void initFunc() {
            Console.WriteLine("========================================");
            Console.Write("계산할 수식(+,-,*,/,%) <Ctrl + C로 중단>\n=> ");
        }

        static double Calculating(double _num1, double _num2, char _op) {
            double _result;

            switch(op) {
                case '+':
                    _result = (_num1 + _num2);
                    break;
                case '-':
                    _result = (_num1 - _num2);
                    break;
                case '*':
                    _result = (_num1 * _num2);
                    break;
                case '/':
                    _result = (_num1 / _num2);
                    break;
                default:
                    _result = 0.0;
                    break;
            }

            return _result;
        }
    }
}