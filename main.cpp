#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main(){
	ifstream fIn;
	char field[15][7];
	int i= 0, j = 0;
	fIn.open("field.txt");

	if(fIn.is_open()){
		while(!fIn.eof()){
			field[i][j]=fIn.getchar();
			i++; j++;
			if(i == 15){
				i = 0;
				j++;
			}
			
		}
	}

	fIn.close();

	return 0;
}