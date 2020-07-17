#include"linkedlist.cpp"
#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 
	 
	 cout<<"This is a Word Generator program which generate words from  your random letters input string."<<endl<<endl;
	 
	 int size = 0;

	 
	 string arr; 
    fstream file; 
    string word; 

    file.open("dictionary.txt");
  
  
    
    cout<<"Enter the string: ";
 
   cin>>arr;
   size = arr.length();
   
   char tmp;
   for(int i=0; i<size; i++)			// SORTING - ALGORITHM # 1
   {
   	for(int j=0; j<size-1; j++)
   	{
   		
   		if(arr[j]>arr[j+1])
   		{
   			tmp = arr[j];
   			arr[j]= arr[j+1];
   			arr[j+1] = tmp;
		   }
	   }
 
	  
   }
  
   // ====================== SORTING END ================================
   
  while(!file.eof()) 
   {
    getline(file,word); 
    string correct = word;
    
    InsertAtFirst(word);		// LINKED LIST (INSERTION) - ALGORITHM # 2
  
   

   
   
    string temp = "";
    if(arr.length()>word.length())
    {
	
    for (int i = 0; i < word.size(); ++i) 		// 		COMPARISON - ALGORITHM # 3
	{
      
		for(int j=0; j<arr.size(); j++)
		{
			if(word[i]==arr[j])
		{
            temp = temp + word[i]; 
        
        }
	  }

    }
 }

     if(temp == correct )
    {
    	 cout<< correct<<endl;
	}
	
} 
    return 0; 
} 
