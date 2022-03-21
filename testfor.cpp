/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long s = 0,t=1;
	int n;
	cout<<" Nhap n"<<endl;
	cin>>n;
	for(int i = 1;i <= n; i++)
	{
		t = t * i;
		s = s + t;
	}
	cout<<s;
  return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int p,q,Ucln,Bcnn;
	while(true){
		cout<<"\t Nhap p= "; cin>>p; 
		cout<<" \t Nhap q= "; cin>>q;	
		if(p>q) break;	
	cout<<"\t \t **Vui long nhap lai p > q** \n"; 
	}
	for(int i=1;i<=q;i++){
		if(p%i==0 && q%i==0){
			Ucln=i; 
		} 
	}
	cout<<"Ucln = "<<Ucln<<endl;; 
	int i=q; 
	for(;;){
		if(i%p==0 && i%q==0){
			cout<<"Bcnn = "<<i<<endl; 
			break; 
		} 
		i++;	 
	} 
	
	
	return 0;
}

*//*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int	p,q, x, y,UCLN;	
	cout<<"Nhap 2 so nguyen duong p,q:"; 	cin>>p>>q; 
	p = x; q = y;
	while (x!=y)
    {
        if (x>y)
    {
        x=x-y;
    }
	else
    {
        y=y-x;
    }
	}
 	UCLN = x;
  cout<<"\nUoc chung lon nhat la"<<UCLN<<endl;
  cout<<"Boi chung nho nhat la"<<(p*q)/UCLN<<endl;
    return 0;
}
*//*
#include <iostream>
using namespace std;
int main(){
	int p,q,Ucln,Bcnn;
	while(true){
		cout<<"\t Nhap p= "; cin>>p; 
		cout<<" \t Nhap q= "; cin>>q;	
		if(p>q) break;	
	cout<<"\t \t **Vui long nhap lai p > q** \n"; 
	}
	for(int i=1;i<=q;i++){
		if(p%i==0 && q%i==0){
			Ucln=i; 
		} 
	}
	cout<<"Ucln = "<<Ucln<<endl;; 
	//int i=q; 
	while(i>=p){
		if(i%p==0 && i%q==0){
			cout<<"Bcnn = "<<i<<endl; 
			break; 
		} 
		i++;	 
	} 
/
	
	return 0;
}*/
	cout << " ==========Bai 14==========" << endl;	
	int p,q,UCLN,BCNN;
	
	while(true)
	{
		cout << " Nhap p = "; 
		cin >> p; 
		cout << " Nhap q = ";  
		cin >> q;	
		if(p >q ) 
		break;	
		cout<<"\t  Vui long nhap lai p > q \n"; 
	}
	for(int i = 1; i <= q; i++)
	{
		if(p % i == 0 && q % i == 0)
		{
			UCLN = i;
		}
	}
	cout << " Uoc chung lon nhat la: " << UCLN << endl;
	int i=p;
	for(;;)
	{
		if((i % p == 0) && (i % q == 0))
		{
			cout << " Boi chung nho nhat la: " << i << endl;
			break;
		}else 
		cout << "sai";
		break;
	}
	cout << " =========================";


