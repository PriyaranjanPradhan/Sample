#include<iostream>
using namespace std;
struct heaps{int H[100];
int length;
int parent;
void heapinsert(int key);
void display();
public:heaps(){
length=0;
parent=0;
}
};

void heaps::heapinsert(int key){

	
	int i=length;
	int temp;
	H[length]=key;

	while (i!=0){
	parent = (i-1)/2;
	if(H[parent]<H[i]){
	temp=H[parent];
	H[parent]=H[i];
	H[i]=temp;}	
	i=parent;
	}
length++;

}
void heaps::display() {
	for (int i = 0; i < length; i++) {
		cout << H[i]<<endl;
	}
}



int main(){
heaps newheap;
newheap.heapinsert(10);
newheap.heapinsert(40);
newheap.heapinsert(25);
newheap.heapinsert(60);
newheap.heapinsert(25);
newheap.display();
return 0;
}

