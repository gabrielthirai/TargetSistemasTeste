import java.util.Scanner;

public class questao2{
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);

        int numero;
        int a = 1;
        int b = 0;
        int aux;

        System.out.println("Informe um numero para verificar se o seu numero pertence ou não a sequencia de Fibonacci: ");
        numero = entrada.nextInt();
        
        for(int i = 0; i < 40; i++){
        	aux = a;
        	a = a + b;
        	b = aux;
        	System.out.println(a);
        	if(numero == a) {
        		System.out.println("Seu numero corresponde a sequencia de fibonacci");
                break;
        	}
        }
        entrada.close();
    }
}