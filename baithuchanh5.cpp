#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

//	cout << " -------------------Bai 1 ---------------" << endl;
/*	int max ( int x, int y )
	{
		return( x > y )? x:y;

	}
	int main ()
	{
		int a, b, c, d;
		cout << " Nhap vao 4 so nguyen to " << endl;
		cin >> a >> b >> c >> d;
		cout << " So lon nhat la " << max ( max ( a, b), max ( c, d )) << endl;
	}

*/
/*
//	cout << " -------------------Bai 2---------------" << endl;
	int KTSHH ( int x )
	{
		int tong = 0;
		for ( int i = 1; i < x; i++)
		{
			if( x % i == 0 )
			
				tong = tong + i;
			
			if ( tong == x )
			
				return 1;
			
			return 0;
		}
	}
	int main()
	{
		unsigned int n;
		cout << " Nhap vao so nguyen duong n: " << endl;
		cin >> n;
		cout << " Cac so hoan hao trong pham vi " << n << " la: " << endl;
		for ( int i = 1; i <= n; i++ )
		{
			if ( KTSHH(i) == 1 )
			{
				cout << i << " \t ";
			}
		}
		return 0;	
	}

*/

//	cout << " -------------------Bai 3---------------" << endl;
	
/*	int UCLN ( int m, int n )
	{
		while ( m != n )
		{
			if ( m > n )
			{
				m = m - n;
			}else
			{
				n = n - m;
			}
		}
		return m;
	}
	int main ()
	{
		int a, b, c, d;
		cout << " Nhap vao 4 so nguyen " << endl;
		cin >> a >> b >> c >> d;
		cout <<"UCLN(" << a <<", " << b << ", " << c << ", " << d << " )= " << UCLN( UCLN ( a, b ), UCLN( c, d )) << endl;
		return 0;
	}
 */


//	cout << " -------------------Bai 4---------------" << endl;
/*	
	float luythua (int x, int y )
	{   
		float   p = 1;
    	for (int i = 1; i<=y; i++)
    		p = p*x;      //hoac  p  *= x;
    return  p;
	}
	int  main()
	{
		int     a, n;
    	cout << " Nhap co so a: ";   
		cin >> a;
    	cout << " Nhap so mu n: ";   
		cin >> n;
    	cout<<a<<"^"<<n<<"= "<<luythua(a,n)<<endl;
    return 0;
	} 
*/

//	cout << " -------------------Bai 5---------------" << endl;
/*	int giaithua ( int n )
	{
		float p = 1;
		for ( int i = 1; i <= n; i++ )
		{
			p = p * i;
		}
		return p;
	}
	int main()
	{
		int a;
		cout << " Nhap a tu ban phim " << endl;
		cin >> a;
		cout << " Giai thua cua " << a << " La " << giaithua(a) << endl;
		return 0; 
	}

*/

//	cout << " -------------------Bai 6---------------" << endl;
/*	
	void cacuoc ( int n )
	{
		for (  int i = 1; i <= n; i++ )
		{
			if( n % i == 0 )
				cout << i << " \t ";
		}
	}
	int main()
	{
		int a;
		cout << " Nhap a tu ban phim " << endl;
		cin >> a;
		cacuoc(a);
		return 0;
	}
*/

//	cout << " -------------------Bai 7---------------" << endl;
/*
	void KTTG( int a, int b, int c )
	{
		if ( a + b > c && b + c > a && a + c > b  )
		{
			cout << " a b c co tao thanh 1 tam giac " << endl;
		}
	}
	
	int main ()
	{
		int a, b, c;
		cout << " Nhap vao 3 so a b c " << endl;
		cin >> a >> b >> c;
		KTTG(a, b, c);
		return 0;
	}
*/

//	cout << " -------------------Bai 8---------------" << endl;
/*
	int  Songuyento(int  x)
    {
        int dem = 0;
        for (int i = 1; i <= x; i++)
            if (x % i == 0)
                dem++;
        if (dem==2)
                return  1;
        return    0;
        
    }
	int   main()
	{    
		unsigned  int   n;
    	cout<<" Nhap vao so nguyen duong n: ";
    	cin>>n;
    	cout<<" Cac so nguyen to trong pham vi " << n << "la:" <<endl;
    	for (int  i = 1; i <= n; i++)
        	if (Songuyento(i) == 1)
           	cout<< i << "\t";
    	return 0;
}
*/

//	cout << " -------------------Bai 9---------------" << endl;
/*	bool ktsochinhphuong(int n)
	{
		if(n < 1)
        	return false;
    	int i = sqrt(n);
    		if(i*i==n)
       			return true;
    	return false;
	}
	void sochinhphuong(int n)
	{
    	cout<<"Cac so chinh phuong nho hon "<<n<<endl;
   		int a = sqrt(n);
    	if(ktsochinhphuong(n))
        	for(int i=1;i<a;i++)
            	cout<<i*i<<" ";
    	else
        	for(int i=1;i<=a;i++)
            cout<<i*i<<" ";
}
	int main()
	{
	    int n;
 
    do
	{
        cout << "Nhap n: ";
        cin >> n;
    }while(n <= 0);
	ktsochinhphuong(n);
    sochinhphuong(n);
    return 0;
	}
    

*/


//	cout << " -------------------Bai 10---------------" << endl;
/*	int reverse_num(int n)
	{ 
  		int reverse = 0; 
  		while (n > 0) 
  		{  	
	  		reverse = reverse * 10 + n % 10;
    		n /= 10;
  		}
 	 	return reverse;
	}
	int main()
	{
    	int n;	
    	cout << (">> Nhap so tu nhien = "); cin>>n;   
    	if( reverse_num(n) == n) 
			cout << n << " la so doi xung"<<endl;
    	else 
			cout << n << " khong phai la la so doi xung"<<endl;
    	return 0;
}


*/

//	cout << " -------------------Bai 11---------------" << endl;
	struct nhan_vien
	{
		char ho_va_ten[30];
		int luong_co_ban,luong,he_so_luong,luong_phu,tong_luong;
	}nv[100];
	void nhap(nhan_vien nv[100],int n,int i)
	{
    	cout << "======================================================="<<endl;
    	cout << "Nhap danh sach Nhan Vien "<<endl;
    	cout << "======================================================="<<endl;
    	for(i;i<=n;i++)
		{
        	cout << "Nhap ten nhan vien thu "<<i<<" "<<endl;
        	cin >> nv[i].ho_va_ten;
        	cout << "Nhap Luong co ban cua nhan vien "<<i<<" "<<endl;
        	cin >> nv[i].luong_co_ban;
        	cout << "Nhap he so luong cua nhan vien "<<i<<" "<<endl;
        	cin >> nv[i].he_so_luong;
    	}
        system("cls");
	}
	void xuat(nhan_vien nv[100],int n,int i)
	{
    	cout << " Danh sach Nhan Vien"<<endl;
    	cout << setw(10)<<" Ho va ten "
        << setw(10) << " Luong co ban"
        << setw(10) << " He so luong"
        << setw(10) << " Luong "
        << setw(10) << " Luong phu"
        << setw(10) << " Tong luong"<<endl;
    	cout << "______________________________________________________________________________________"<<endl;
    	for(i=1;i<=n;i++)
		{
        	cout << setw(10)<<nv[i].ho_va_ten
            	 << setw(10)<<nv[i].luong_co_ban
            	 << setw(10)<<nv[i].he_so_luong
            	 << setw(10)<<nv[i].luong
            	 << setw(10)<<nv[i].luong_phu
            	 << setw(10)<<nv[i].tong_luong<<endl;}
    	cout << "______________________________________________________________________________________"<<endl;
	}
	void tinh(nhan_vien nv[100],int n,int i)
	{
    	for(i;i<=n;i++)
		{
        	nv[i].luong=nv[i].luong_co_ban*nv[i].he_so_luong;
        	nv[i].luong_phu=(nv[i].luong/100)*25;
       		nv[i].tong_luong=nv[i].luong+nv[i].luong_phu;
    	}
	}
	int main()
	{
    	int n,i=1,chon;
    	cout<<"Nhap so nhan vien ";
    	cin>>n;
    	nhap(nv,n,i);
    	tinh(nv,n,i);
    	xuat(nv,n,i);
    	cout<<" 1.Them nhan vien"<<endl;
    	cout<<" 2.exit"<<endl;
    	cin>>chon;
    do
	{
    	if(chon==1)
		{
        	int j;
        	i=n+1;
        	cout<<" So nhan vien muon them ";
        	cin>>j;
        	n=n+j;
    		nhap(nv,n,i);
    		tinh(nv,n,i);
    		xuat(nv,n,i);
    	}
    	else if(chon==2)
		{
        	exit(1);
    	}
   		cout<<" 1.Them nhan vien"<<endl;
    	cout<<" 2.exit"<<endl;
    	cin>>chon;
    }while(chon!=2);
	}












