/******************************************************************************

    Jamison Murphy
    Dr. Ray Toal
    CMSI 662 

*******************************************************************************/

#include<iostream>
#include <string>
#include <cctype>  //to activate std:: toupper() and tolower()
#include <math.h>
using namespace std;

int main() {
    
    float price[5];
	price[0] = 20.10;
	price[1] = 50.25;
	price[2] = 30.50;
	price[3] = 40.75;
	price[4] = 10.15;

    char cart;
    char choice;
    char edit;
    int additions;
    int subtractions;
    int quantity;
    float subTotal {};
    float total;
    
    std:: string name;
    std:: string number;
    
    std::cout << "Please enter name for order: " << std::endl;
    std::cin >> name;
    std:: cout << "Name: " << name << std::endl ;
    
    std::cout << "Please enter phone number for order: " << std::endl;
    std::cin >> number;
    std:: cout << "Phone Number: " << number << std::endl;

    do{
      
    std::cout << " What would you like to Purchase " << std::endl;
	std::cout << " 1. [C]lothes $20.10 each " << std::endl;
	std::cout << " 2. [E]lectronics $50.25 each " << std::endl;
	std::cout << " 3. [H]ousedecor $30.50 each " << std::endl;
	std::cout << " 4. [M]edications $40.75 each " << std::endl;
	std::cout << " 5. [F]ood $10.15 each " << std::endl;
	std::cout << " 6. [X]Check out " << std::endl;
	std::cin >> choice;
    
    if (std::toupper(choice) == 'C'){
	 std::cout << " How many would you like to buy? " << std::endl;
	 std::cin >> quantity;
	 subTotal += price[0] * quantity;
	 std::cout << "Subtotal: " << subTotal << std::endl;
	 std::cout << "Do you want to add these to the cart? (y/n) " <<std::endl;
	 std::cin >> cart;
	 
	 if (cart == 'y'){
	     subTotal = subTotal;
	 }
	 else { std::cout<< "Adding items? (y/n) " << std::endl;
	        cin >> edit;
	        if (edit == 'y'){
	            std::cout << "How many? " << std:: endl;
	            std::cin >> additions;
              subTotal -= price[0] * quantity;
	            quantity += additions;
	            subTotal += price[0] * quantity;
	            std::cout << "Subtotal: " << subTotal << std::endl;
	        } else { std::cout << "Removing items? (y/n) " << std::endl;;
	                 cin >> edit;
	                 if (edit == 'y'){
	                    std::cout << "How many? " << std:: endl;
	                    std::cin >> subtractions;
                      subTotal -= price[0] * quantity;
	                    quantity -= subtractions;
	                    subTotal += price[0] * quantity;
	                    std::cout << "Subtotal: " << subTotal << std::endl;
	                 }
	              } 
                }
    } else if (std::toupper(choice) == 'E'){
	 std::cout << " How many would you like to buy? " << std::endl;
	 std::cin >> quantity;
	 subTotal += price[1] * quantity;
	 std::cout << "Subtotal: " << subTotal << std::endl;
	 std::cout << "Do you want to add these to the cart? (y/n) " <<std::endl;
	 std::cin >> cart;
	 
	 if (cart == 'y'){
	     subTotal = subTotal;
	 }
	 else { std::cout<< "Adding items? (y/n) " << std::endl;
	        cin >> edit;
	        if (edit == 'y'){
	            std::cout << "How many? " << std:: endl;
	            std::cin >> additions;
              subTotal -= price[1] * quantity;
	            quantity += additions;
	            subTotal += price[1] * quantity;
	            std::cout << "Subtotal: " << subTotal << std::endl;
	        } else { std::cout << "Removing items? (y/n) " << std::endl;
	                 cin >> edit;
	                 if (edit == 'y'){
	                    std::cout << "How many? " << std:: endl;
	                    std::cin >> subtractions;
                      subTotal -= price[1] * quantity;
	                    quantity -= subtractions;
	                    subTotal += price[1] * quantity;
	                    std::cout << "Subtotal: " << subTotal << std::endl;
	                 }
	              } 
                }
    } else if (std::toupper(choice) == 'H'){
	 std::cout << " How many would you like to buy? " << std::endl;
	 std::cin >> quantity;
	 subTotal += price[2] * quantity;
	 std::cout << "Subtotal: " << subTotal << std::endl;
	 std::cout << "Do you want to add these to the cart? (y/n) " <<std::endl;
	 std::cin >> cart;
	 
	 if (cart == 'y'){
	     subTotal = subTotal;
	 }
	 else { std::cout<< "Adding items? (y/n) " << std::endl;
	        cin >> edit;
	        if (edit == 'y'){
	            std::cout << "How many? " << std:: endl;
	            std::cin >> additions;
              subTotal -= price[2] * quantity;
	            quantity += additions;
	            subTotal += price[2] * quantity;
	            std::cout << "Subtotal: " << subTotal << std::endl;
	        } else { std::cout << "Removing items? (y/n) " << std::endl;
	                 cin >> edit;
	                 std::cout << "How many? " << std:: endl;
	                 if (edit == 'y'){
	                    std::cin >> subtractions;
                      subTotal -= price[2] * quantity;
	                    quantity -= subtractions;
	                    subTotal += price[2] * quantity;
	                    std::cout << "Subtotal: " << subTotal << std::endl;
	                 }
	              } 
                }
    } else if (std::toupper(choice) == 'M'){
	 std::cout << " How many would you like to buy? " << std::endl;
	 std::cin >> quantity;
	 subTotal += price[3] * quantity;
	 std::cout << "Subtotal: " << subTotal << std::endl;
	 std::cout << "Do you want to add these to the cart? (y/n) " <<std::endl;
	 std::cin >> cart;
	 
	 if (cart == 'y'){
	     subTotal = subTotal;
	 }
	 else { std::cout<< "Adding items? (y/n) " << std::endl;
	        cin >> edit;
	        if (edit == 'y'){
	            std::cout << "How many? " << std:: endl;
	            std::cin >> additions;
              subTotal -= price[3] * quantity;
	            quantity += additions;
	            subTotal += price[3] * quantity;
	            std::cout << "Subtotal: " << subTotal << std::endl;
	        } else { std::cout << "Removing items? (y/n) " << std::endl;;
	                 cin >> edit;
	                 if (edit == 'y'){
	                    std::cout << "How many? " << std:: endl;
	                    std::cin >> subtractions;
                      subTotal -= price[3] * quantity;
	                    quantity -= subtractions;
	                    subTotal += price[3] * quantity;
	                    std::cout << "Subtotal: " << subTotal << std::endl;
	                 }
	              } 
                }
    } else if (std::toupper(choice) == 'F'){
	 std::cout << " How many would you like to buy? " << std::endl;
	 std::cin >> quantity;
	 subTotal += price[4] * quantity;
	 std::cout << "Subtotal: " << subTotal << std::endl;
	 std::cout << "Do you want to add these to the cart? (y/n) " <<std::endl;
	 std::cin >> cart;
	 
	 if (cart == 'y'){
	     subTotal = subTotal;
	 }
	 else { cout<< "Adding items? (y/n) " << std::endl;
	        cin >> edit;
	        if (edit == 'y'){
	            std::cout << "How many? " << std:: endl;
	            std::cin >> additions;
              subTotal -= price[4] * quantity;
	            quantity += additions;
	            subTotal += price[4] * quantity;
	            std::cout << "Subtotal: " << subTotal << std::endl;
	        } else { cout << "Removing items? (y/n) " << std::endl;;
	                 cin >> edit;
	                 if (edit == 'y'){
	                    std::cout << "How many? " << std:: endl;
	                    std::cin >> subtractions;
                      subTotal -= price[4] * quantity;
	                    quantity -= subtractions;
	                    subTotal += price[4] * quantity;
	                    std::cout << "Subtotal: " << subTotal << std::endl;
	                 }
	              } 
                }
    } else if (std::toupper(choice) == 'X') {
           total = subTotal;
           std::cout << " Your Total is " << total <<std::endl;
  } 
 } while(std::toupper(choice) != 'X');

}