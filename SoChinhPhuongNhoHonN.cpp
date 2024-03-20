#include <iostream>
using namespace std;


bool soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}

int nhapSo()
    {
        int n;
        do
        {
        cout << "\nNhập vào số nguyên dương bất kì";
        cin >> n;
        }while(n < 0)
 
    return n;
    }
    
void xuatSoCPNHonN(int n)
{
    int count  = 0;
    for (int i = 1 ; i <=n ; i++){
    if (soCP(i) == true)
    {
        printf("%d , ",i);
        count++;
    }
    }
    printf("so luong so chinh phuong : %d",count);
}

int main(void)
{
    xuatSoCPNHonN(50);
    }
