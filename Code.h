#include <iostream>
int x =3 , y = 1,xx=x,yy=y,kpress=0;
char k[3][30][121];
int marp[][30][120]={
  201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187,
  186,176,255,025,255,255,255,255,178,178,178,178,178,178,178,178,182,182,182,255,255,255,255,178,255,255,255,255,255,178,178,178,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,219,219,219,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,186,
  186,178,178,178,178,178,255,255,178,178,178,178,178,178,178,178,182,024,255,255,178,178,255,178,255,178,178,255,178,255,178,178,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,255,219,255,255,219,219,219,255,255,219,219,219,219,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,219,219,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,255,255,255,255,255,255,255,219,219,219,219,219,186,
  186,219,219,219,219,178,255,255,178,178,178,178,178,178,178,178,255,255,255,255,255,255,255,255,255,178,178,255,178,255,178,178,255,178,178,178,178,178,178,178,178,178,178,178,178,255,255,255,255,255,178,178,178,178,255,219,255,255,255,255,255,255,255,219,255,255,157,219,219,219,255,219,219,219,219,219,219,219,219,219,219,255,219,255,219,219,219,219,219,255,219,219,219,255,219,219,255,219,219,255,219,219,219,219,219,219,255,219,255,219,219,219,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,240,178,178,178,178,255,178,255,178,178,255,178,178,178,255,255,178,178,178,178,178,178,178,255,219,219,255,255,178,178,178,178,255,219,255,219,219,255,219,219,255,219,255,255,255,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,219,255,255,255,255,255,219,255,255,255,255,255,219,219,219,219,255,219,255,255,255,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,240,178,178,178,178,255,255,255,255,255,255,178,178,178,255,255,178,178,178,178,178,178,178,255,219,219,255,255,178,178,178,178,255,219,255,255,255,219,255,255,255,219,255,219,219,255,219,219,255,219,219,219,219,219,219,219,219,219,219,255,219,255,219,219,219,219,219,255,219,219,219,255,219,219,219,219,219,255,219,219,219,219,219,219,255,219,219,219,219,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,255,255,178,178,178,178,178,178,178,255,219,219,255,255,178,178,178,178,255,219,219,255,255,255,255,255,219,219,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,255,219,255,219,219,219,219,219,255,219,219,219,255,219,219,219,219,219,255,255,255,255,255,255,255,255,219,255,255,255,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,255,255,255,255,255,255,255,255,255,255,178,178,178,178,178,178,255,255,178,255,255,255,255,255,255,255,255,255,255,255,255,255,178,178,178,178,178,178,178,255,219,219,255,255,178,178,178,178,255,219,219,219,255,255,255,219,219,219,255,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,219,219,219,219,219,255,219,219,219,255,219,219,219,219,219,255,255,255,255,255,255,255,255,219,255,219,219,219,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,178,178,178,178,178,178,178,178,178,255,178,178,255,255,255,255,178,255,178,255,178,178,178,178,178,178,178,178,178,178,255,255,178,178,219,219,219,219,178,255,219,219,255,255,178,178,178,178,255,178,219,219,219,219,219,219,219,219,255,255,255,219,178,178,219,219,219,219,219,219,219,219,219,219,219,255,255,255,219,219,219,219,219,255,219,219,219,255,219,219,219,219,219,255,219,219,219,219,219,219,255,219,255,255,255,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,178,178,178,178,178,178,178,178,178,255,178,178,255,178,178,255,178,255,178,255,178,178,178,178,178,178,178,178,178,178,255,255,178,178,219,219,219,219,178,255,219,219,255,255,178,178,178,178,255,178,178,219,219,219,219,219,219,219,255,255,157,178,178,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,255,255,255,255,255,219,255,255,255,255,255,219,219,255,219,255,219,219,219,219,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,178,255,255,255,255,255,255,255,178,255,178,178,255,178,178,255,178,255,178,255,178,178,178,178,255,178,024,178,255,178,255,255,178,178,219,219,255,219,178,255,219,219,255,255,178,178,178,178,255,178,219,219,219,219,219,219,219,219,219,219,219,178,255,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,219,255,219,255,219,219,219,219,255,219,219,255,255,255,219,255,255,255,255,255,255,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,255,178,255,178,178,255,178,178,255,178,182,178,255,178,178,178,178,255,255,255,255,255,178,255,255,178,178,219,219,255,219,178,255,219,219,255,255,178,178,178,178,240,219,219,178,178,178,178,178,178,178,219,178,178,178,255,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,219,255,219,255,219,219,219,219,219,255,219,255,219,219,255,219,219,219,219,219,219,219,255,219,219,219,219,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,255,178,255,178,178,255,178,178,255,178,255,255,255,178,178,178,178,178,178,255,178,178,178,255,255,178,178,219,219,255,219,178,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,178,219,219,219,219,219,219,219,219,219,219,219,233,219,233,219,219,219,219,219,255,255,255,255,255,255,219,219,219,219,219,255,219,219,255,219,255,255,255,255,255,255,255,219,255,255,255,255,255,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,255,178,255,255,255,255,178,178,255,178,255,255,255,178,178,178,178,178,178,255,178,178,178,255,255,178,178,219,219,255,219,178,178,178,219,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,178,219,219,219,219,219,219,219,219,219,219,219,240,219,240,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,255,219,219,219,219,219,219,255,219,219,219,219,219,255,219,186,
  186,219,219,219,219,178,178,255,178,255,255,255,255,255,178,178,178,178,178,178,178,255,178,178,178,255,178,178,178,178,178,178,255,178,178,178,255,255,178,178,219,219,255,219,178,219,219,219,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,178,219,219,219,219,219,219,219,219,219,219,182,255,255,255,182,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,255,219,255,219,186,
  186,219,219,219,219,178,178,255,178,255,178,178,178,178,178,178,178,178,178,178,178,255,178,178,178,255,178,178,178,178,178,178,255,178,178,178,255,255,178,219,219,219,255,219,178,178,219,219,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,178,219,219,219,219,219,219,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,186,
  186,219,219,219,219,178,178,255,178,255,255,255,255,255,255,255,178,178,178,178,178,255,178,178,178,255,255,255,255,255,255,255,255,178,178,178,255,255,178,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,255,178,219,219,219,219,219,219,219,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,178,178,255,178,178,178,178,178,255,178,178,178,240,178,178,178,178,178,178,178,178,178,178,255,255,178,219,219,219,255,219,219,219,219,219,255,255,178,178,178,178,178,178,255,255,219,219,219,255,255,219,219,219,219,219,255,178,219,219,219,219,219,219,219,219,219,255,255,255,255,255,233,219,219,219,219,219,219,219,219,219,219,255,255,219,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,178,178,255,255,255,255,255,255,255,178,178,178,255,178,178,178,178,178,178,178,178,178,178,255,255,178,219,219,219,255,219,219,219,219,219,255,255,178,178,178,178,178,178,255,219,219,219,255,255,255,219,219,219,219,219,255,178,219,219,219,255,255,255,255,255,255,219,219,219,219,219,219,219,219,219,219,219,255,182,240,255,219,255,255,219,219,219,255,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,255,178,178,178,178,178,178,178,178,178,178,255,255,178,178,178,219,255,255,255,255,255,255,255,255,178,178,178,178,178,178,219,182,255,255,255,255,219,219,219,219,219,219,255,178,219,219,219,255,219,219,219,219,219,219,219,219,219,255,255,255,255,255,255,255,255,219,219,024,219,255,255,219,219,219,255,219,255,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,186,
  186,219,219,219,219,178,178,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,240,178,178,178,178,178,178,178,178,178,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,219,219,219,219,219,219,219,219,219,219,219,255,178,219,219,219,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,219,024,219,255,255,219,219,219,255,219,255,219,219,255,219,255,255,255,255,255,255,255,219,219,219,219,219,186,
  186,219,219,219,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,178,219,219,219,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,255,182,240,255,219,255,255,219,219,219,255,219,255,219,219,255,255,255,219,219,219,219,219,255,219,219,219,219,219,186,
  186,219,255,255,255,255,219,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,255,255,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,219,219,219,219,219,219,219,219,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,255,255,219,219,219,255,219,255,219,219,219,219,219,219,219,219,219,219,255,219,219,219,219,219,186,
  186,219,255,219,219,255,219,219,219,219,219,219,219,219,219,219,219,178,178,255,255,178,178,178,255,255,255,255,255,178,255,178,178,178,219,219,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,255,219,219,219,219,255,219,219,219,219,255,219,219,219,219,219,219,255,255,219,219,219,255,219,255,219,219,219,219,219,219,219,219,219,219,255,255,255,255,219,219,186,
  186,219,255,219,255,255,219,219,219,219,219,219,219,219,219,219,219,178,178,255,255,255,255,255,255,255,178,255,255,178,255,255,255,255,233,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,219,219,219,219,255,219,219,219,219,255,255,219,219,219,219,219,255,255,219,219,219,255,219,255,255,255,219,219,219,219,219,219,219,219,219,219,219,255,219,219,186,
  186,219,255,255,255,255,255,255,255,219,219,219,219,219,178,178,178,178,178,255,255,178,178,178,178,178,240,255,255,178,255,255,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,219,219,219,219,255,219,219,219,219,255,255,255,255,255,255,255,255,255,219,219,219,255,219,219,219,255,219,219,219,255,255,255,255,255,255,219,219,255,219,219,186,
  186,219,255,255,255,255,219,219,219,219,219,219,219,219,178,255,255,255,255,255,255,178,219,219,178,255,255,178,178,178,255,255,255,255,233,219,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,219,219,219,219,255,219,219,219,219,255,255,219,219,219,219,219,219,219,219,219,219,255,255,255,219,255,219,219,219,255,255,219,219,219,255,255,255,255,219,219,186,
  186,219,255,255,255,255,219,219,219,219,219,219,219,219,178,255,255,178,178,255,255,178,219,219,178,255,255,255,255,255,255,178,178,219,219,219,219,219,219,219,219,219,178,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,219,219,219,219,219,219,219,219,219,219,219,255,255,255,219,219,219,255,255,219,219,219,219,219,219,219,219,219,186,
  186,219,255,255,255,255,219,219,219,219,219,219,219,219,178,255,255,255,024,178,178,219,219,219,219,178,178,178,178,255,255,255,178,219,219,219,178,219,219,219,219,178,178,178,178,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,206,206,219,219,219,219,219,219,219,219,219,186,
  200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188,
};
class Controller{
  bool key[5]={0,0,0,0,0},keym[2]{0,0},lock1[2]={0,0},lock2[2]={0,0},hook=0;
public:
  Controller();
  bool up();
  bool down();
  bool left();
  bool right();
  bool door();
  void lock();
  void keys();
  void cannon();
  void fix();
  void code();
};
Controller::Controller(){
  for(int i = 0 ; i < 30 ; i++){
    for(int j = 0 ;j < 120 ; j++){
        k[0][i][j]=marp[0][i][j];
      }
      k[0][i][120]='\n';
    }
  x=3;
  xx=x;
  y=1;
  yy=y;
}
void Controller::fix(){
  for(int f = 0; f<30; f++){
    for(int j = 0; j<=120; j++){
      if(k[0][f][j]==(char)025){
        x=j;
        y=f;
        xx=x;
        yy=y;
        break;
      }
    }
  }
}
void Controller::code() {
  std::string pass="grumm";
  std::string passk;
  std::cin >> passk;
  if(passk == pass){
    std::cout << "command accepted" << '\n';
    key[0]=1;
    key[1]=1;
    key[2]=1;
  }
  else if (passk == "tp"){
    std::cout << "command accepted" << '\n';
    k[0][y][x]=255;
    x=78;
    y=25;
    k[0][y][x]=(char)025;
    std::cout << "\x1b[H";
    std::cout << k[0][0] << '\n';
  }
  else if (passk == "exit"){
    exit(0);
  }
}
void Controller::cannon(){
  if(xx==x && yy==y){
    if(k[0][y-1][x]==(char)182){
      yy=y-1;
      xx=x;
    }
    if(k[0][y+1][x]==(char)182){
      yy=y+1;
      xx=x;
    }
    if(k[0][y][x-1]==(char)182){
      yy=y;
      xx=x-1;
    }
    if(k[0][y][x+1]==(char)182){
      yy=y;
      xx=x+1;
    }
  }
  else if (yy!=y || xx!=x) {
    std::cout << "cannon fired";
    if (k[0][yy-1][xx]==(char)240){
      k[0][yy - 1][xx] = (char)015;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy-1][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      yy=y;
      xx=x;
    }
    else if (k[0][yy+1][xx]==(char)240) {
      k[0][yy+1][xx]=(char)015;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy+1][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      yy=y;
      xx=x;
    }
    else if (k[0][yy][xx-1]==(char)240) {
      k[0][yy][xx-1]=(char)015;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx-1]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      yy=y;
      xx=x;
    }
    else if (k[0][yy][xx+1]==(char)240) {
      k[0][yy][xx+1]=(char)015;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx+1]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      k[0][yy][xx]=(char)255;
      std::cout << "\x1b[H";
      std::cout << k[0][0] << '\n';
      yy=y;
      xx=x;
    }
    else fix();
  }
}
void Controller::keys() {
  if(y-1==10&&x==32){
    key[0]=1;//the one on the trident
    k[0][10][32]=(char)255;
    std::cout << "The first key to bridge acquired.";
  }
  else if(y==2&&x-1==17||y-1==2&&x==17){
    if(key[1]==0){
      key[1]=1;
      k[0][2][17]=(char)255;
      std::cout << "The second key to bridge acquired.";
    }
  }
  else if(y==28&&x+1==18){
    key[2]=1;//the one near the bridge;
    k[0][28][18]=(char)255;
    std::cout << "Key to second bridge acquired.";
  }
  else if((y-1==19 || y+1==19) && x==93){
    if (key[3]==0) {
      key[3]=1;
      k[0][19][93]=(char)255;
      std::cout << "First key to bridge acquired";
    }
  }
  else if((y-1==20 || y+1==20) && x==93){
    if (key[4==0]) {
      key[4]=1;
      k[0][20][93]=(char)255;
      std::cout << "Second key to bridge acquired";
    }
  }
  else if((y==3 && x+1==66)||(y-1==3 && x==66)){
    if (keym[0]==0) {
      keym[0]=1;
      k[0][3][66]=(char)255;
      std::cout << "Key1 to main gate acquired";
    }
  }
  else if((y==9 && x+1==66)||(y+1==9 && x==66)){
    if (keym[1]==0) {
      keym[1]=1;
      k[0][9][66]=(char)255;
      std::cout << "Key2 to main gate acquired";
      }
}
}
void Controller::lock(){
  if(k[0][y][x+1]==(char)233){
    std::cout << "lever found" << '\n';
    if (y==24&&x+1==34&&key[0]==1) {
      std::cout << "lever 1  activated" << '\n';
      lock1[0]=1;
      k[0][24][34]=(char)232;
      if (lock1[1]==1) {
        for(int i =34; i<=34+42;i++){
          k[0][25][i]=(char)255;
          //system("cls");
          std::cout << "\x1b[H";
          std::cout << k[0][0];
        }
        k[0][25][34 + 43] = (char)178;
        std::cout << "\x1b[H";
        std::cout << k[0][0];
      }
    }
    else if (y==26&&x+1==34&&key[1]==1) {
      std::cout << "lever 2 activated" << '\n';
      lock1[1]=1;
      k[0][26][34]=(char)232;
      if (lock1[0]==1) {
        for(int i =34; i<=34+42;i++){
          k[0][25][i]=(char)255;
          //system("cls");
          std::cout << "\x1b[H";
          std::cout << k[0][0];
        }
      }
    }
    else if(x+1== 84 && y==17 && key[2]==1){
      k[0][17][84]=(char)232;
      //system("cls");
      std::cout << "\x1b[H";
      k[0][18][83] = (char)255;
      std::cout << k[0][0];
      std::cout << "drawbridge activated" << '\n';
    }
  }
  else if (k[0][y-1][x]==(char)233) {
    std::cout << "lever found" << '\n';
    if (y-1==12&&x==81&&key[3]==1) {
      std::cout << "lever 1  activated" << '\n';
      lock2[0]=1;
      k[0][12][81]=(char)232;
      if (lock2[1]==1) {
        for(int i =13;i >=7; i--){
          k[0][i][82] = (char)255;
          //system("cls");
          std::cout << "\x1b[H";
          std::cout << k[0][0];
        }
        k[0][6][82] = (char)178;
        std::cout << "\x1b[H";
        std::cout << k[0][0];
      }
    }
    else if (y-1==12&&x==83&&key[4]==1) {
      std::cout << "lever 2 activated" << '\n';
      lock2[1]=1;
      k[0][12][83]=(char)232;
      if (lock2[0]==1) {
        for(int i =13; i>=7;i--){
          k[0][i][82] = (char)255;
          //system("cls");
          std::cout << "\x1b[H";
          std::cout << k[0][0];
        }
        k[0][6][82] = (char)178;
        std::cout << "\x1b[H";
        std::cout << k[0][0];
        }
      }
    }
    else if(x+1== 84 && y==17 && key[2]==1){
      k[0][17][84]=(char)232;
      //system("cls");
      std::cout << "\x1b[H";
      k[0][18][83] = (char)255;
      std::cout << k[0][0];
      std::cout << "drawbridge activated" << '\n';
    }
  }

bool Controller::up(){
  if(k[0][y-1][x]==(char)255 && (k[0][yy-1][xx]==(char)255||k[0][yy-1][xx]==(char)025)) {//&& ){
    k[0][y-1][x]=k[0][y][x];
    k[0][y][x]=(char)255;
    if(yy!=y || xx!=x){
      k[0][yy-1][xx]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
    }
    y--;
    yy--;
    return 1;
  }
  else if (k[0][yy-1][xx]==(char)255 && (k[0][y-1][x]==(char)255||k[0][y-1][x]==(char)182)) {
    k[0][yy-1][xx]=k[0][yy][xx];
    k[0][yy][xx]=(char)255;
    if(yy!=y || xx!=x){
      k[0][y-1][x]=k[0][y][x];
      k[0][y][x]=(char)255;
    }
    y--;
    yy--;
    return 1;
  }
  else return 0;
}

bool Controller::down(){
  if(k[0][y+1][x]==(char)255 && (k[0][yy+1][xx]==(char)255||k[0][yy+1][xx]==(char)025)) {//&& ){
    k[0][y+1][x]=k[0][y][x];
    k[0][y][x]=(char)255;
    if(yy!=y || xx!=x){
      k[0][yy+1][xx]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
    }
    y++;
    yy++;
    return 1;
  }
  else if (k[0][yy+1][xx]==(char)255 && (k[0][y+1][x]==(char)255||k[0][y+1][x]==(char)182)) {
    k[0][yy+1][xx]=k[0][yy][xx];
    k[0][yy][xx]=(char)255;
    if(yy!=y || xx!=x) {
      k[0][y+1][x]=k[0][y][x];
      k[0][y][x]=(char)255;
    }
    y++;
    yy++;
    return 1;
  }
  else return 0;
}

bool Controller::left(){
  if(k[0][y][x-1]==(char)255 && (k[0][yy][xx-1]==(char)255||k[0][yy][xx-1]==(char)025)) { //&& {
    k[0][y][x-1]=k[0][y][x];
    k[0][y][x]=(char)255;
    if(yy!=y || xx!=x){
      k[0][yy][xx-1]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
    }
    x--;
    xx--;
    return 1;
  }
  else if (k[0][yy][xx-1]==(char)255 && (k[0][y][x-1]==(char)255||k[0][y][x-1]==(char)182)) {
      k[0][yy][xx-1]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
    if(yy!=y || xx!=x){
      k[0][y][x-1]=k[0][y][x];
      k[0][y][x]=(char)255;
    }
    x--;
    xx--;
    return 1;
  }
  else return 0;
}

bool Controller::right(){
  if(k[0][y][x+1]==(char)255 && (k[0][yy][xx+1]==(char)255||k[0][yy][xx+1]==(char)025)){ //&& {
    k[0][y][x+1]=k[0][y][x];
    k[0][y][x]=(char)255;
    if(yy!=y || xx!=x){
      std::cout << "corgi y ="<< yy <<"x = "<<xx;
      std::cout << "erazed" << '\n';
      k[0][yy][xx+1]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
    }
    x++;
    xx++;
    return 1;
  }
  else if (k[0][yy][xx+1]==(char)255 && (k[0][y][x+1]==(char)255||k[0][y][x+1]==(char)182)) {
      k[0][yy][xx+1]=k[0][yy][xx];
      k[0][yy][xx]=(char)255;
      if(yy!=y || xx!=x){
        k[0][y][x+1]=k[0][y][x];
        k[0][y][x]=(char)255;
        x++;
        xx++;
        return 1;
  }
}
  else return 0;
}
bool Controller::door() {
  if (((x==109||x==108)&& y==27)&&(keym[1]==1&&keym[0]==1)) {
    std::cout << "Congratulations on completing this game in " << kpress << " moves \n\a";
    return 1;
  }
  else return 0;
}
