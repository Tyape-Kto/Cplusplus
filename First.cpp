#include<iostream>  

// this is just a comment

/* this is multi 
line comment */



int main(){
  std::cout<< "Welcome to \n";
  std::cout << "C++ world!";
  return 0;
}



int main(){
  int num1{0};
  int num2{0};
  
  std:: cout << "Enter first number: ";
  std:: cin >> num1;
  
  std:: cout << "Enter second number: ";
  std:: cin >> num2;
  
  int sum{num1 + num2};
  
  std:: cout << "Total sum of number is: " << sum << std:: endl; // you can stuff num1 + num2 directly than initializing it. and this is called concatinating of strings.
  return 0;
}



int main(){
  int product{3};
  while (product <= 100) {
    product = product * 3;
    std::cout << product << std::endl;
  }
}

int main(){
  int iteration{0};
  int grade;
  int total{0};
  std::cout << "Enter Grade(-1 to end): ";
  std::cin >> grade;
  if (grade != -1) {
    total += grade;
  }
  while (grade != -1) {
    std::cout << "Enter Grade(-1 to end): ";
    std::cin >> grade;
    total += grade;
    iteration += 1;
  }
  total++ ;
  std::cout << "Average Grade: " << total/iteration << std::endl;
  std::cout << iteration << " " << total;
  
   // when user don't put any value then app crashes, fix it bitch.
}
