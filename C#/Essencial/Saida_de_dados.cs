using System;
using System.Globalization;

namespace Programa{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("Bom dia ");
            Console.WriteLine("Boa Noite");

            int x, y;
            x = 10;
            y = 20;
            System.Console.WriteLine(x);
            System.Console.WriteLine(y);


            double j;
            j = 2.4564;
            System.Console.WriteLine(j);

            //Imprimindo com padrões de casas decimais
            double h ;
            h = 2.4564;
            System.Console.WriteLine(h.ToString("F2",CultureInfo.InvariantCulture));

            //forma mais curta para formar o número double
            CultureInfo CI = CultureInfo.InvariantCulture;
            double i;
            i = 3.5435;
            System.Console.WriteLine(i.ToString("F2",CI));

            System.Console.WriteLine("=======================");
            System.Console.WriteLine();

            
            int idade;
            double salario;
            string nome;
            char sexo;

            idade = 32;
            salario = 4560.9;
            nome = "Maria da Silva";
            sexo = 'F';

            System.Console.WriteLine("A funcionaria " + nome + " do sexo " + sexo + ", ganha " 
            + salario.ToString("F2",CI) + " e tem " + idade + " anos ");

        }
    }
}