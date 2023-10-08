#include <iostream>
using namespace std;
  int main() {
 int num, resposta, fertil, dias, numMAX=0, numMIN=999,diferença1, submax1, submin1;
  string nome;
  bool finalizar = false;

  cout<<"DIGITE SEU NOME:"<<endl;
  getline(cin,nome);
   do{
 
  cout<<endl;
cout<<"--------------------------------------------\n";
cout<<"|  BEM VINDA A TABELA DO PERÍODO FÉRTIL <3.| \n";
cout<<"-------------------------------------------\n";
cout<<endl;
cout<<"---------------------------------------------\n"; cout<<"Olá,"<<nome<<" vamos te ajudar a calcular seu período fértil, com base no seu ciclo menstrual, para isso precisamos de algumas informações! Vamos lá?!!!"<<endl;
cout<<"----------------------------------------------\n";
cout<<endl;
cout<<"--------------------------------------------\n";
cout<<"[0]Opção: Digite 0 caso queira sair do programa.\n";
cout<<"[1]Opção: Digite 1 caso esteja na menoupasa.\n";
cout<<"[2]Opção: Digite 2 caso seu ciclo seja irregular. \n"; 
cout<<"[3]Opção: Digite 3 para calcular o seu período fértil e caso não saiba se é regular ou não vamos te ajudar.\n";
cout<<"---------------------------------------------\n";
cin>>resposta;

switch(resposta){

  case 0:
    cout<<nome<< ", obrigada por ter usado a tabela do período fértil!"<<endl;
  break;
  
  case 1:
    cout<<nome<<", você não possui ciclo menstrual, impossibilitando calcular o período fértil. (-_-)\n";
    cout<<"OBRIGADA POR UTILIZAR NOSSO PROGRAMA!! \n";
  break;

  case 2:
    cout<<nome<<", calcular o período fértil no ciclo irregular não é seguro para quem está tentando engravidar ou para quem não quer engravidar, pois como a menstruação não surge sempre no mesmo período, as contas podem ser erradas.\n";
   
  break;

case 3:
    cout<<"Olá "<< nome<<", vamos te passar algumas informações antes de começar ok?!.\n Primeiro observe o seu ciclo menstrual durante 6 meses, e a duração dele. Pegue o ciclo mais longo dos últimos 6 meses e o mais curto entre com esses valores para analisarmos se seu ciclo é regular e caso seja informaremos seu período fértil.\n\n Caso contrário, sendo irregular, não é seguro informar seu periódo fértil, seria mais suscetível a erro, pois como a menstruação não surge sempre no mesmo período, as contas podem ser erradas.\n \n Agora entre com o período mais longo do seu ciclo menstrual e o mais curto."<<endl;

for(int i=0; i<2; i++){
	cin>>num;

    if((num<21)||(num>35)){
      cout<< nome <<", seu período está fora do normal, recomendamos a procura de um ginecologista. Um ciclo menstrual normal dura em torno de 21 dias á 35 dias."<<endl; 
    finalizar= true;
    }

    else { 

           if(num>numMAX){
              numMAX=num; 
             }

           if(num<numMIN){
              numMIN=num;
           }
    
     }
    
  } 
if(!finalizar){
  submax1=(numMAX-11);
  submin1=(numMIN-18);
  diferença1=numMAX-numMIN;

 if(diferença1>6){
   cout<<" Olá, "<<nome<<" o seu período não é regular, sendo assim não é seguro calcular o período fértil! (-_-)"<<endl;
 }
 
  else { 
   
    cout<<nome<< ", o seu PERÍODO FÉRTIL vai começar entre  "<< submin1 <<"  á "<< submax1 <<" dias do seu ciclo."<<endl;
  }
  }
    break;
  
 default:
  cout<<nome<<", opção inválida"<<endl;

}


 } while(resposta!=0);
   
return 0;
}
