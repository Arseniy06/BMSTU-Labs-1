#include <iostream>
using namespace std;
int main(){
	float summ = 0;
  int n = 1;
  for (;n<6;++n) {
    float tmp = 1/(2**n);
    cout << tmp << endl;
		summ += tmp;
	}
  cout << summ << endl;
}
