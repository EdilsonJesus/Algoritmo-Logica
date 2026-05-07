using System;

namespace Programa
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, i, x, soma;

            Console.Write("Quantos números serão digitados? ");
            n = int.Parse(Console.ReadLine());

            soma = 0;
            for(i = 1; i <= n; i++)
            {
                Console.Write("Digite um número: ");
                x = int.Parse(Console.ReadLine());
                soma = soma + x;
            }

            Console.WriteLine("Soma" + soma);
        }
    }
}