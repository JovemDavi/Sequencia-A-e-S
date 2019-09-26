// input  = 011010

// usando S = 0 -> 0A -> 01A -> 011A ->011A -> 0110S -> 01101S -> 011010A -> 011010A -> 011010AE

#include <iostream>

using namespace std;

int main() 
{
    
   // aqui ele vai pegar o a[0] que é a string 1A,
   // e vai separa num array char1A que tem duas posicoes
   // a primeira posicao do char1A vai ser o char 1,
   // a segunda posicao do char1A vai ser o char A,
     
    cout << "A: \n";
    
    char char1A[2]={'1','A'};
	
    cout<<"CHAR: ";
	cout<<char1A[0]; // -> 1
	cout<<", ";
    cout<<char1A[1]; // -> A
    
	cout<<"\n\n";		

    // 0S

    char char0S[2]={'0','S'};
    
    cout<<"CHAR: ";
    cout<<char0S[0]; // -> 0
    cout<<", ";
    cout<<char0S[1]; // -> S

    cout<<"\n\n";
    
    cout << "B: \n";
    
    // 1S

    char char1S[2]={'1','S'};

    cout<<"CHAR: ";
    cout<<char1S[0]; // -> 1
    cout<<", ";
    cout<<char1S[1]; // -> S

    cout<<"\n\n";
    

    //0A
    
    char char0A[2]={'0','A'};

    cout<<"CHAR: ";
    cout<<char0A[0]; // -> 0
    cout<<", ";
    cout<<char0A[1]; // -> A

    cout<<"\n\n";
    
    
	string Sequencia;
    cout<<"Digite a sequencia de numeros binários: ";
    cin >> Sequencia;
    
    int tamanhoDaSequencia = Sequencia.size();
    
    //char chSequencia[tamanhoDaSequencia];
    
    //for(int i = 0; i < tamanhoDaSequencia; i++){
    //    strcpy(chSequencia, strSequencia.c_str());
    //}
    
    
    // Aqui temos 
    // chSequencia = Array contendo cada elemento da sequencia [1, 1, 0, 1, 0, 0]
    
    // char1A = Array contendo [1, A]
    // char0S = Array contendo [0, S]
    
    // char1S = Array contendo [1, S]
    // char0A = Array contendo [0, A]
    
    char output[20]; // dpois precisa fazer o tamanho se adaptar
    char ultimaSequencia = 'A';
    
    int j=0, contador=1;
    for(int i = 0; i < tamanhoDaSequencia; i++){
        
        if(ultimaSequencia == 'A') {
            
           if(Sequencia[i] == '0'){
               output[j] = char0A[0];
               output[j + 1] = char0A[1];
           }
           
           if(Sequencia[i] == '1'){
               output[j] = char1S[0];
               output[j + 1] = char1S[1];
           }
           contador++;
           ultimaSequencia = 'B';
           for( int i = 0; i < 10; i++) {
                if(output[i]=='0'||output[i]=='1'||output[i]=='A'||output[i]=='S')
                cout << output[i];
            }
        cout << endl;
            
        }
        
        if(ultimaSequencia == 'B') {
            
            if(Sequencia[i] == '0'){
                output[j] = char0S[0];
                output[j + 1] = char0S[1];
                
            }
            
            if(Sequencia[i] == '1'){
                output[j] = char1A[0];
                output[j + 1] = char1A[1];
            }
            contador++;
            ultimaSequencia = 'A';
            for( int i = 0; i < contador; i++) {
                if(output[i]=='0'||output[i]=='1'||output[i]=='A'||output[i]=='S')
                cout << output[i];
            }
        cout << endl;
        }
        cout << endl;
        j++;
     }
    
      cout << "\nOutput__________\n";
        for( int i = 0; i < contador; i++) {
                if(output[i]=='0'||output[i]=='1')
                cout << output[i];
            }
        cout << endl;

    return 0;
}
