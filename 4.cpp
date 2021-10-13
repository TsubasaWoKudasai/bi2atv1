#include <iostream>

int main (){
 int n1;
 int n2;
 int n3;

 std::cout << ("Digite 3 numeros diferentes \n");
 std::cin >> n1 >> n2 >> n3;

if (n1 < n2 && n2 < n3) {
    std::cout << " o menor numero e : " << n1;
}
else if  (n1 < n3 && n3 < n2) {
    std::cout << " o menor numero e : " << n1;
}
else if  (n2 < n1 && n1 < n3) {
    std::cout << " o menor numero e : " << n2;
}
else if  (n2 < n3 && n3 < n1) {
    std::cout << " o menor numero e : " << n2;
}
else if  (n3 < n1 && n1 < n2) {
    std::cout << " o menor numero e : " << n3;
}
else if  (n3 < n2 && n2 < n1) {
    std::cout << " o menor numero e : " << n3;
}
else if ( n3 == n2 && n1 == n2) {
	std::cout << " Todos os numeros sao iguais, sendo o menor numero : " << n1 ;
} 
else if (n3 == n2 && n3 > n1) {
	std::cout << "O terceiro e segundo numero sao iguais e maiores que o primeiro, portanto o menor e : " << n1 ;
} 
else if (n3 == n1 && n3 > n2 ) {
	std::cout << " o terceiro e o primeiro numero sao iguais e maiores que o segundo, portando o menor e : " << n2 ;
}
else if (n3 == n2 && n3 < n1) {
	std::cout << "O terceiro e segundo numero sao iguais e menores que o primeiro, portanto o menor e : " << n2 ;
} 
else if (n3 == n1 && n3 < n2 ) {
	std::cout << " o terceiro e o primeiro numero sao iguais e menores que o segundo, portando o menor e : " << n1 ;
}
else if (n1 == n2 && n2 > n3) {
	std::cout << " o segundo e o primeiro numero sao iguais e maiores que o terceiro, portando o menor e : " << n3 ;
}
else {
	std::cout << " o primeiro e segundo numeros sao iguais e menores que o terceiro, portanto o menor e :  " << n1 ;
}
 return 0;
}
