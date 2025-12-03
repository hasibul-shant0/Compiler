#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

bool is_numeric(string str){
    for(int i = 0;i < str.size();i++){
        if(!(str[i] <= '9' && str[i] > '0')){
            return false;
        }
    }
    return true;
}
string token(string str){
    if(str == "main" || str == "int" || str =="float" || str =="string" || str == "char" || str == "double" || str == "return"){
        return "Keywords";
    }
    if( str == "," || str == ";" || str == "(" || str == ")" || str == "{" || str == "}" || str == "[" || str == "]"){
        return "Punctions";
    }
    if(str == "!=" || str == "=" || str == "+" || str == "-" || str == "*" || str == "/" || str == "%"){
        return "Operator";
    }
    if(is_numeric(str)){
        return "Constant";
    }
    else{
        return "Identifier";
    }
 
}
int main(){
    ifstream f;
    f.open("source.txt");
    if (f.is_open()){
        string line;
        int i = 0;
        while (getline(f, line)) {
            i++;
            cout<<"Line "<<i<<": \n";
            string t;
            stringstream ss(line);
            char del = ' ';
            while (getline(ss, t, del)){
                if(t == "")continue;
                cout << t << ": ";
                string str = token(t);
                cout<<str<<endl;
            }
        }
        f.close();
    }
    else {
        cerr << "Error opening file!" << endl;
    }
}