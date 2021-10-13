#include <iostream>

int main () {
 float pro1;
 float pro2;
 float pro3;
 float med1;
 float med2;

 std::cin >> pro1 >> pro2 >> pro3;
 med1 = (pro1 + pro2 + pro3)/3;
 std::cout << ("\n essa e a media das 3 provas") <<med1;

if (pro1 > pro2 && pro2 > pro3) {
    med2 = (pro1 + pro2)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2;
 }
if (pro1 > pro3 && pro3 > pro2) {
    med2 = (pro1 + pro3)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2;
 }
if (pro2 > pro1 && pro1 > pro3) {
    med2 = (pro1 + pro3)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2;
 }
if  (pro2 > pro3 && pro3 > pro1) {
    med2 = (pro2 + pro3)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2;
 }
if  (pro3 > pro1 || pro1 > pro2) {
    med2 = (pro2 + pro3)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2;
 }
if  (pro3 > pro2 || pro2 > pro1) {
    med2 = (pro2 + pro3)/2;
    std::cout << ("\n Essa e a media das 2 maiores notas ")<<med2; 
 }
 return 0;
}
