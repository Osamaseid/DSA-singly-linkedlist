
//Data Structure And Algorithm Singly Linked  Simple Example

#include<iostream>

 void insert_end(int x);
 	void insert_beg(int x);
 	void insert_right_y(int x,int y);
 	void insert_left_y(int x,int y);
    void delete_front();
	void delete_end();
	void diplay();
using namespace std;

	struct node 
	{  
	   int data;  
	   node *next;
	}; 
    
    node *head = NULL;
    
    void insert_end(int x){
    	node *temp = new node;
    	temp->data = x;
    	temp->next = NULL;
    	if(head == NULL)
    	head = temp;
		else 
		{
			node *temp2 = head;
			while(temp2->next != NULL)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp;
		}
	}
	
	void insert_beg(int x){
		node *temp = new node;
		temp->data = x;
		temp->next = NULL;
		if(head == NULL)
		head = temp;
		else
		{
			temp->next = head;
			head = temp;
		}
	}
    
    void insert_right_y(int x,int y){
    	node *temp = new node;
    	temp->data = x;
    	temp->next = NULL;
    	
    	if(head==NULL)
    	  head==temp;
    	  else{
    	  	node *temp2 = head;
    	  	while(temp2->data!=y)
    	  	{
    	  		temp2 = temp2->next; 
			  }
			  temp->next = temp2->next;
			  temp2->next = temp;
		  }    	
	}
    void insert_left_y(int x,int y){
    	node *temp = new node;
    	temp->data = x;
    	temp->next = NULL;
    	
    	if(head == NULL)
    	head = temp;
    	else
    	{
    		node *temp2 = head;
    		node *temp3 ;
    		while(temp2->data != y){
    			temp3 = temp2;
    			temp = temp2->next;
			}
			temp = temp3->next;
			
		}

	} 
    
      void delete_front(){
      	node *temp;
      	if(head == NULL)
      	cout<<"there is no data to delete"<<endl;
      	else
      	temp = head;
      	head = head->next;
      	delete temp;
	  }
	  
	  
      void delete_end(){
    	node *temp ,*temp2;
    	if(head == NULL)
    	cout<<"there is no data to delete"<<endl;
    	else
    	temp = head;
    	while(temp->next != NULL)
    	{
    		temp2 = temp;
    		temp = temp2->next;
		}
		temp2->next = NULL;
		delete temp;
	}
	
	void display(){
    	node *temp ;
    	if(head == NULL)
    	cout<<"no data "<<endl;
    	else
    	{
    		temp = head;
    		while(temp->data != NULL){
    			cout<<temp->data << "";
    			temp = temp->next;
			}
			
		}
 	}
	
    
int main(){
	insert_end(3);
	insert_end(4);
	insert_end(5);
	insert_end(6);
	
	
    insert_beg(1);
	insert_beg(2);
	insert_beg(7);
	insert_beg(8);
	
	delete_front();
	delete_end();
	//insert_right_y(7,1);
	//insert_left_y(4,4);
	display();
	


	
}























    
  
