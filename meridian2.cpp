#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "mapp00.h"
using namespace std;
int main() {
  int m = 0,n = 0;
  bool eye;
  mojave moveto;
  std::cerr << "To enable eye comfort mode press 1(system memory consumption increased)" << '\n';
  cin >> eye;
  for(int i = 0;i<30;i++){
    for(int j = 0;j<120;j++){
        cout<<(char)marp[0][i][j];
      }
      cout<<endl;
    }
    cout<<'\a';
    system("pause");
    system("color e3");
      system("cls");
        for(int i = 0 ; i < 30 ; i++){
            for(int j = 0 ;j < 120 ; j++){
              std::cout << (char)marp[0][i][j];
        }
    cout <<endl;
  }
  cout << "\a";
  int mover;
  bool paste,end,ended=0;
  do {
    paste = 0;
    mover = getch();
    if (mover == 224) {
      mover = getch();
      moveto.keys();
    }
    kpress++;
    switch(mover){
      case ' ':
        cout<<"space pressed";
        moveto.cannon();
        moveto.lock();
        break;
      case '/':
        moveto.code();
        break;
      case 'f':
      case 'F':
        moveto.fix();
        break;
      case 'a':
      case 'A':
      case 75:
        paste = moveto.left();
        break;
      case 'd':
      case 'D':
      case 77:
        paste = moveto.right();
        break;
      case 'w':
      case 'W':
      case 72:
        paste = moveto.up();
        break;
      case 's':
      case 'S':
      case 80:
        paste = moveto.down();
        break;
    }
    if (paste==1) {
      if (eye!=1){
      system("cls");
      cout<<k[0][0];
    }
      else{ cout << '\n';}
     // cout<<'\r'<<endl<<k[0][0]<<'\r';
}
}while(moveto.door()!=1);
std::cout << "Now press any key to exit" << '\n';
getch();
}
