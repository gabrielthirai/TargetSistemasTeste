#include <iostream>
#include <iomanip>  
#include<locale.h>
using namespace std;

main(){
    
    //Serve para incluir as acentuações
    setlocale(LC_ALL, "Portuguese");

    //Definindo o faturamento de cada estado
    float sp = 67.83643;
    float rj = 36.67866;
    float mg = 29.22988;
    float es = 27.16548;
    float outros = 19.84953;

    //Criando variável para calcular o percentual
    float percentualDeRepresentacaoSp;
    float percentualDeRepresentacaoRj;
    float percentualDeRepresentacaoMg;
    float percentualDeRepresentacaoEs;
    float percentualDeRepresentacaoOutros;

    //Variável para calcular a soma do faturamento dos estados
    float valorTotal;

    //somando os faturamentos dos estados
    valorTotal = sp + rj + mg + es + outros;

    //calculando o percentual de representação de cada estado
    percentualDeRepresentacaoSp = sp / valorTotal;
    percentualDeRepresentacaoRj = rj / valorTotal;
    percentualDeRepresentacaoMg = mg / valorTotal;
    percentualDeRepresentacaoEs = es / valorTotal;
    percentualDeRepresentacaoOutros = outros / valorTotal;

    //Limitando as casas decimais
    cout << fixed << setprecision(2);

    //Imprimindo tudo.
    cout<<"O percentual de representação de SP é de: "<<((percentualDeRepresentacaoSp * 100))<<"%"<<"\n";
    cout<<"O percentual de representação de RJ é de: "<<(percentualDeRepresentacaoRj * 100)<<"%"<<"\n";
    cout<<"O percentual de representação de MG é de: "<<(percentualDeRepresentacaoMg * 100)<<"%"<<"\n";
    cout<<"O percentual de representação de ES é de: "<<(percentualDeRepresentacaoEs * 100)<<"%"<<"\n";
    cout<<"O percentual de representação de Outros é de: "<<(percentualDeRepresentacaoOutros * 100)<<"%"<<"\n";
}