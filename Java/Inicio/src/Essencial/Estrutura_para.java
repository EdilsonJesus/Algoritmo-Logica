package Essencial;

import java.util.Scanner;

public class Estrutura_para {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, i, soma, x;
        System.out.println("Quantos números serão digitados: ");
        N = sc.nextInt();

        soma = 0;
        for(i = 1; i <= N; i++){
            System.out.println("Digite um número: ");
            x = sc.nextInt();
            soma += x;
        }

        System.out.println("SOMA = " + soma);
        sc.close();
    }
}
