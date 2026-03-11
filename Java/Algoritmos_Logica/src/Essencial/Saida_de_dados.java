package Essencial;

public class Saida_de_dados {
	public static void main(String[] args) {
		int x, y;
		x = 20; 
		y =  10;
	    System.out.println(x);
	    System.out.println(y);
	    
	    double j; 
	    j = 2.3456; 
	    
	    System.out.println(String.format("%.2f", j));
	    
	    int idade;
	    double salario;
	    String nome; 
	    char sexo;
	    
	    idade = 32;
	    salario = 4560.9;
	    nome = "Maria Silva";
	    sexo = 'F';
	    
	    System.out.println("A funcionaria" + nome + ", Sexo " + sexo + ", ganha "
	    		+ String.format("%.2f", salario) + "e tem " + idade + "anos");
	    System.out.println();
	    System.out.println();
	    System.out.println();
	    
		
	}
}
