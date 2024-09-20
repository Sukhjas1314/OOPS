#include<iostream>
using namespace std;
class Vector{
  public:
    int size;
    int capacity;
    int *arr;

    Vector(){
      size = 0;
      capacity = 1;
      arr = new int[1];
    }
    void add(int ele){
      if(size == capacity){
        capacity *= 2;
        int *arr2 = new int[capacity];
        for(int i = 0 ; i < size ; i++){
          arr2[i] = arr[i];
        }
        arr = arr2;
      }
      arr[size++] = ele;
    }
    void print(){
      for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    }
    int get(int idx){
      if(size == 0){
        cout << "Array is empty" << endl;
        return -1;
      }
      if(idx >= size || idx < 0){
        cout << "Invalid index" << endl;
        return -1;
      }
      return arr[idx];
    }
    void remove(){
      if(size == 0){
        cout << "Array is empty" << endl;
      }
      size--;
    }
};
int main(){
  Vector v1;

  cout << v1.size << " " << v1.capacity << endl;

  v1.add(10);
  v1.print();
  cout << v1.size << " " << v1.capacity << endl;

  v1.add(5);
  v1.print();
  cout << v1.size << " " << v1.capacity << endl;

  v1.add(9);
  v1.print();
  cout << v1.size << " " << v1.capacity << endl;

  v1.add(3);
  v1.print();
  cout << v1.size << " " << v1.capacity<< endl;

  cout << v1.get(2) << endl;

  v1.remove();
  v1.print();

  v1.remove();
  v1.print();
  
  cout << endl;
  return 0;
}