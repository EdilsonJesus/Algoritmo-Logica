using System;
using System.Globalization;

namespace Programa
{
    class Program
    {
        static void Main(String[] args){
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x = 5;
            double y = 2 * x;
            Console.WriteLine(x);
            System.Console.WriteLine(y.ToString("F2"), CI);

            System.Console.WriteLine("==============================");
            System.Console.WriteLine("CALCULANDO AREA TRAPÉZIO");
            double b1, b2, h, area;
            b1 = 6.0;
            b2 = 8.0;
            h = 5.0;
            area = (b1 + b2) / 2.0 * h;
            System.Console.WriteLine(area.ToString("F2"), CI);

            System.Console.WriteLine("==============================");
            System.Console.WriteLine("REALIZANDO CASTING COM NÚMEROS INTEIROS");

            int a, b;
            double resultado; 
            a = 5;
            b = 2;
            resultado = (double) a / b;
            Console.WriteLine(resultado);

            System.Console.WriteLine("==============================");
            System.Console.WriteLine("De forma analoga, double para inteiro");

            double num1;
            int num2; 
            num1 = 5.2;
            num2 = (int)num1;

            System.Console.WriteLine(num2);


        }
    }
}