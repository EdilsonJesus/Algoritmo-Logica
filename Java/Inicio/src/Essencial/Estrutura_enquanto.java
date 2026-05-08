package Essencial;

import java.util.Scanner;

public class Estrutura_enquanto {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int x, soma;
        soma = 0;
        System.out.println("Digite um número: ");
        x = sc.nextInt();

        while (x != 0){
            soma += x;
            System.out.println("Digite outro numero: ");
            x = sc.nextInt();
        }
        System.out.println("SOMA = " + soma);
        sc.close();
    }
}
