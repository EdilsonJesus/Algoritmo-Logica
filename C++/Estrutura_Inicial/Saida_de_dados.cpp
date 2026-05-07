#include <bits/stdc++.h> //INCLUSÃO DE TODAS A BIBLIOTECAS


using namespace std;

int main() {

    // Saida no terminal comando "COUT"
    cout << "Bom dia " << endl;
    cout << "Boa noite" << endl;

    //IMPRIR VALORES
    int x, y;
    x = 20;
    y = 55;
    cout << x << endl;
    cout << y << endl; 

    double j;
    j = 2.3456;

    cout << fixed << setprecision(2);   
    cout << j << endl;

    // mesma saida com o comando na mesma linha
    cout << fixed << setprecision(2) << x << endl; 

    int idade;
    double salario;
    string nome; 
    char sexo; 

    idade = 32; 
    salario = 4560.9;
    nome = "Maria Santos";
    sexo = 'F';

    cout << fixed << setprecision(2); 
    cout << "A funcionaria " << nome << ", sexo " << sexo 
    << " , ganha R$ " << salario << " e tem " << idade << "anos. " << endl;

    
    return 0; 

}