#include "Assignment1.h"

int main(int argc, char **argv){
  if(argc < 2){
    cout << "invalid command line paramaters" << endl;
    return 1;
  }

  ifstream inFS;
  ofstream outFS;
  string fileNum;
  string fName = argv[1];

  cout << "Opening file: " << fName << endl;
  inFS.open(fName);
  outFS.open("output.txt");


  if (!inFS.is_open()){
    cout << "Could not open file" << fName << endl;
    return 1;
  }

  cout << "Reading and printing strings." << endl;


  while(!inFS.eof()){
    inFS >> fName;
    int strInput = strlen(fName.c_str());

    if (!inFS.fail()){

      //int strInput = strlen(fName.c_str());

      for (int i = 0; i < strInput; ++i){

      char upper = toupper(fName.at(i));
      //cout << "char: " << fName << endl;
      outFS << upper;
      }
    }


  cout << "Closing the file." << endl;

  inFS.close();
  outFS.close();

  return 0;
  }
}
