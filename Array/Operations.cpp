#include <iostream>
using namespace std;

void oddIndexedElements(int arr[], int size);
void sumOfElements(int arr[],int size);
void averageOfElements(int arr[],int size);
void insertElementAtIndex(int arr[],int &size,int index,int element);
void deleteElementAtIndex(int arr[],int &size,int index);
void display(int arr[],int size);
int menu();

void performOperations(int arr[], int size) {
    do{
      switch(menu()){
        case 1:
          oddIndexedElements(arr,size);
          break;    
        case 2:
          sumOfElements(arr,size);      
          break;
        case 3:
          averageOfElements(arr,size);
          break; 
        case 4:
          int index,element;
          cout<<"Enter the index :";
          cin>>index;
          cout<<"Enter element to insert:";
          cin>>element;
          insertElementAtIndex(arr,size,index,element);
           break;
        case 5:
          cout<<"Enter the index of element to delete: ";
          int Index;
          cin>>Index;
          deleteElementAtIndex(arr,size,Index);
           break;   
        case 6:
          display(arr,size);
           break;   
        case 7:
          cout << "Exiting..." << endl;
          return;   
        default:
          cout << "Invalid choice. Please try again." << endl;
      }
    }while(true);
}

int menu() {
    cout << "Menu:" << endl;
    cout << "1. To print the OddIndexed elements" << endl;
    cout << "2. Sum of all elements" << endl;
    cout << "3. Average of all elements" << endl;
    cout << "4. Insertion of an element at a specific index" << endl;
    cout << "5. Deletion of an element at a specific index" << endl; 
    cout << "6. Display the array elements"<<endl;
    cout << "7. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}


void oddIndexedElements(int arr[],int size){
cout<<"Odd indexed elemnts are:[ ";
for(int i=1;i<size;i+=2){
   cout<<arr[i]<<" ";
}
cout<<"]"<<endl;
}

void sumOfElements(int arr[],int size){
   int sum=0;
   for(int i=0;i<size;i++){
   sum+=arr[i];
   }
   cout<<"Sum of all Elements is :"<<sum<<endl;
}

void averageOfElements(int arr[],int size){
   int sum=0;
   for(int i=0;i<size;i++){
   sum+=arr[i];
   }
   cout<<"Average of all Elements is :"<<((float)sum)/size<<endl;
}

void insertElementAtIndex(int arr[],int &size,int index,int element){
   if(index<0 || index>size){
      cout<<"Invalid index. Insertion failed."<<endl;
      return;
   }
   for(int i=size;i>index;i--){
      arr[i]=arr[i-1];
   }
   arr[index]=element;
   size++;
   cout<<"Element inserted successfully."<<endl;
   display(arr,size);
}

void deleteElementAtIndex(int arr[],int &size,int index){
   if(index<0 || index>=size){
      cout<<"Invalid index. Deletion failed."<<endl;
      return;
   }
   for(int i=index;i<size-1;i++){
      arr[i]=arr[i+1];
   }
   size--;
   cout<<"Element deleted successfully."<<endl;
   display(arr,size);
}

void display(int arr[],int size){
   cout<<"Array elements are:[";
   for(int i=0;i<size;i++){
      cout<<arr[i]<<"  ";
   }
   cout<<"]"<<endl;
}


int main(){
   int size;

   cout<<"Enter the size of the array: ";
   cin>>size;

   int arr[size];

   for(int i=0;i<size;i++){
      cout<<"Enter "<<i+1<<" element:";
      cin>>arr[i];
   }

   performOperations(arr,size);
}
