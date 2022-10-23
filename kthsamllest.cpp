#include<iostream>

using namespace std;


int* counti(int* arr,int l)

{

  for(int i=0;i<l-1;i++)
  
  {
  
    for(int j=i+1;j<l;j++)
 
      
      
    {
    
      if(arr[i]>arr[j])
      
      {
      
        
        swap(arr[i],arr[j]);
        
      }
      
}
    
return arr; 
    
    
  }
}


int main(void)

{


  int l;
  
  cout<<"enter the sizer of thearray"<<endl;
  
  cin>>l;
  
  int k;
  
  cout<<"enter the value of k"<<endl;
  
  cin>>k;
  
  int arr[l];
  
  for(int i=0;i<l;i++)
  
  {
  
    cout<<"enter the "<<i+1<<" element of thearray"<<endl;
    
    cin>>arr[i];
    
  }
  
  
 
  int* ki=counti(arr,l);
  
  if(k<l)
 
    

    cout<<k<<"th smallest element=="<<ki[k+1]<<endl;
  
}

