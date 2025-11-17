#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isIdentifier(string line){
    if(!((line[0]=='_')||(line[0]>='a' && line[0]<='z') || (line[0]>='A' && line[0]<='Z')))
        {return false;}
    for(int i=1;i<line.size();i++)
        if(!((line[i]=='_')||(line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z') || (line[i]>='0' && line[i]<='9')))
            return false;
    
    return true;
}

int main () {
  
  string line;

  ifstream file("identifier.txt");

  while (getline (file, line)) {
       cout << line<<endl;
  }   
       if (isIdentifier(line)){
            cout << "Valid identifier" << endl;
       }
        else{
            cout << "Invalid identifier" << endl;
        }

  file.close();
  return 0;
}
