package Essencial;

import java.util.Scanner;

public class Estrutura_condicional {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int hora;
        System.out.println("Digite uma hora do dia: ");
        hora = sc.nextInt();

        if (hora < 12){
            System.out.println("BOm Dia  ");
        }else {
            System.out.println("Boa tarde ");
        }
        sc.close();
    }
}
