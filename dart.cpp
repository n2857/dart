#include <iostream>
using namespace std;
int main()
{
	int zahl;
	cin >> zahl;
	for(int a=0;a<=21;a++){
		if(a==21){
			a=25;
		}
		for(int b=1;b<=3;b++){
			if(a==25 && b==3){
				break;
			}
			for(int c=0;c<=21;c++){
				if(c==21){
					c=25;
				}
				for(int d=1;d<=3;d++){
					if(c==25 && d==3){
						break;
					}
					for(int e=0;e<=21;e++){
						if(e==21){
							e=25;
						}
						for(int f=1;f<=3;f++){
							if(e==25 && f==3){
								break;
							}
							if(a*b+c*d+e*f==zahl){
								cout << b << "*" << a << "+" << d << "*" << c << "+" << f << "*" << e << endl;
								//return 0; //uncomment for only first possibility
							}
						}
					}
				}
			}
		}
	}
//system("pause"); //uncomment on Windows
  return 0;
}
//g++ darthelp.cpp -o darthelp
