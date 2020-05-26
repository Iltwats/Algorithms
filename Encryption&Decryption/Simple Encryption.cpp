/*
 * Encryption and Decryption.cpp
 * Author: Iltwats
 */


#include <iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<ctype.h> 
using namespace std;

class Encrypt
 {	
    private:
        char line[80];
		    int key;
	  public:
        void getdata();
        void enc();
        void dec();
        void mix();
};
void Encrypt::getdata()
 {	
      cout <<"\n\n\tEnter your text document to encrypt: "<<"\n\t";
	    cin.getline(line,500);
  }   
void Encrypt::enc()
 {	
      int length;
	    char *enc;
	    key = 4;
	    enc = line;
	    length = strlen(line);

      for (int i = 0; i < length; i++) 
      {
        *enc += key;
         enc++;
	    }
	cout << "\n\tEncrypted text is: \n\t" <<line<<endl;
}
void Encrypt::dec()
{	
          int length,pin;
          char *dec;
          char ch;
          key = 4;
          dec = line;
          length = strlen(line);
          for (int i = 0; i < length; i++) 
          {
            *dec -= key;
            dec++;
	         }
  cout<<"\n\tDo you wish to decrypt the file(Y/N)"<<endl;
  cin>>ch;
      if(toupper(ch=='Y'))
        {
            cout<<"\n\tPlease enter the end server key to decrypt the text:"<<endl;
            cin>>pin;
              if(pin==1220)
               {	
                    cout << "\t\nDecrypted text is: \n\t" << line << endl;
                }
              else
              {
                  cout<<"\n\tWrong key,plz try again!!"<<endl;
                  exit(0);
              }
      }
      else
      cout<<"\n\tThank you. You are exiting";
}

void Encrypt::mix()
{   
          char rply;
          cout<<"\t\t\nDo you want to save the file(Y/N)\n\t";
          cin>>rply;
          
          if(toupper(rply=='Y'))
          {
                ofstream save("file.txt"; ios::out;);
                save<<line;
                save.close();
           }
          else
          continue;
	
}

int main ()
 {
      Encrypt text;
      cout<<"\t\t\t\t\tWelcome\n\tThis is a Ceaser Cipher Program Helping you keep your ‘File Safe'\n"<<endl;
      text.getdata();
      text.enc();
      text.mix();
      text.dec();
 }
