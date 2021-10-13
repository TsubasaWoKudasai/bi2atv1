#include <iostream> 
#include <cstdlib> 
#include <ctime>

using namespace std;

int dado(){
	
	return(1 + rand () % 6);
	
	}
	
int main(){
	
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int rolls;
	
	cout << " 100 mil lancamentos de dado\n";
	
	srand(time(NULL));
	
	for(rolls = 0; rolls < 100000; rolls ++){
	
	switch(dado()){
	
	case 1:
		n1 ++;
		break;
		
	case 2:
		n2 ++;
		break;
	
	case 3:
		n3 ++;
		break;
	
	case 4:
		n4 ++;
		break;
		
	case 5:
		n5 ++;
		break;
	
	case 6:
		n6 ++;
	
		}
	}
	
	cout << "\nTotal de aparicoes de cada numero e suas porcentagens:" << endl;
	cout << "\nNumero 1 apareceu: " << n1 << " vezes" << " ou " << (n1 / 100000.0 * 100) << " % das vezes";
	cout << "\nNumero 2 apareceu: " << n2 << " vezes" << " ou " << (n2 / 100000.0 * 100) << " % das vezes";
	cout << "\nNumero 3 apareceu: " << n3 << " vezes" << " ou " << (n3 / 100000.0 * 100) << " % das vezes";
	cout << "\nNumero 4 apareceu: " << n4 << " vezes" << " ou " << (n4 / 100000.0 * 100) << " % das vezes";
	cout << "\nNumero 5 apareceu: " << n5 << " vezes" << " ou " << (n5 / 100000.0 * 100) << " % das vezes";
	cout << "\nNumero 6 apareceu: " << n6 << " vezes" << " ou " << (n6 / 100000.0 * 100) << " % das vezes" << endl;
	cout << "\nTotal de vezes que o dado foi lancado: " << n1 + n2 + n3 + n4 + n5 + n6 << endl;
	
	return 0;
}
