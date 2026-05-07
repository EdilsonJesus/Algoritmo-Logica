using System;
using System.Globalization;

namespace Programa
{
    class Program
    {
        static void Main(string [] args)
        {
            CultureInfo  CI = CultureInfo.InvariantCulture;
            int N, i;

            Console.Write("Quantos números você vai digitar? ");
            N = int.Parse(Console.ReadLine());

            double[] vetor = new double [N];

            for (i = 0; i < N; i++)
            {
                Console.Write("Digite um número: ");
                vetor[i] = double.Parse(Console.ReadLine(), CI);
            }
            Console.WriteLine();
            Console.WriteLine("Números DIGITADOS: ");
            for(i = 0; i < N; i++)
            {
                Console.WriteLine(vetor[i].ToString("F1", CI));
            }
        }
    }
}