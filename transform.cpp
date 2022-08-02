//
//  transform.cpp
//  
//
//  Created by Shea Cowan on 2/8/22.
//

#include <iostream>

using namespace std;

void trans(int number){
    string result = "";
    while(number > 0){
        int remainder = number % 2;
        result = to_string(remainder)+result;
        number = number/2;
    }
    cout<< "Transformed number is " << result << endl;
}



int main(){
    

    trans(120);
}
 
