#include<iostream>
using namespace std;

void selection_sort(int tab[],int n) 
{
	int mn_index; 
        
	for(int i=0;i<n-1;i++)
  	{
  		mn_index = i;
    
		for(int j=i+1;j<n;j++) 
		{
    		if(tab[j]<tab[mn_index])
    		{
      			mn_index = j;
      		}
		}
 	
		swap(tab[i], tab[mn_index]);
	}
}

int main()
{
	int *tab, n;
	
	cout<<"Ile liczb chcesz posortowaæ? ";
	cin>>n;
	
	tab = new int [n];
	
	for(int i=0;i<n;i++)
	{
		cin>>tab[i]; 
	}
	
	selection_sort(tab,n); 
	
	for(int i=0;i<n;i++)
	{Œ
		cout<<tab[i]<<" ";
	}
		
	cout<<"\n";
	
	system("pause");	
	
	return 0;
}
