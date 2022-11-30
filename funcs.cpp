#include "funcs.h"

std::string printRange(int left, int right){
    if(left < right){
        return std::to_string(left) + " " + printRange(left + 1, right);
    }else{
        return std::to_string(left);
    }//end else condition
}//end printRange function

int sumRange(int left, int right){
    if(left < right){
        return left + sumRange(left + 1, right);
    }else{
        return left;
    }//end condition
}//end sumRange function

int sumArray(int *arr, int size){
    int index = size - 1;
    if(index > 0){
        return *(arr + index) + sumArray(arr, size - 1);
    }else{
        return *(arr + index);//base condition
    }//end else condition
}//end sumArray function

bool isAlphanumeric(std::string s){
    if(s.length() > 0){
        return std::isalnum(s[0]) && isAlphanumeric(s.substr(1));//The std::isalum checks if the letter is alphanumerical
    }else{//base condition
        return true;//if string is empty return true
    }//end else condition
}//end isAlphanumeric function

bool nestedParens(std::string s){
    if(s.length() > 0){
        return (s[0] == '(' && s[s.length() - 1] == ')') && nestedParens(s.substr(1, s.length() - 2));
    }else{
        return true;//base condition
    }//end else condition
}//end nestedParens function