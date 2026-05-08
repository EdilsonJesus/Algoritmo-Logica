package  Essencial;

import java.time.Clock;

public class Casting {
    public static void main(String [] args){
        int x;
        double y;
        x = 5;
        y = 2 * x;
        System.out.println(x);
        System.out.println(y);

        double b1, b2, h, area;
        b1 = 6.0;
        b2 = 8.0;
        h = 5.0;
        area = (b1 + b2) / 2.0 * h;
        System.out.println(area);

        System.out.println("================");
        System.out.println("Exemplo divisão inteira");

        int a, b;
        double resultado;
        a = 5;
        b = 2;

        resultado = (double)a / b;
        System.out.println(resultado);

        System.out.println("================");
        System.out.println("Convertendo double para inteiro");

        double n1;
        int n2;
        n1 = 5.0;
        n2 = (int) n1;
        System.out.println(n2);
    }
}