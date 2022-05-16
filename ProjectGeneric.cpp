#include<iostream>
using namespace std;


////////////////////////////////////////////////
//
//  This is Generic Linear LinkedList
//
////////////////////////////////////////////////
template <typename T>
struct nodeLL
{
	T data;
	struct nodeLL*next;
};

////////////////////////////////////////////////
//
//  This is Generic Circular LinkedList
//
////////////////////////////////////////////////
template <typename T>
struct nodeCL
{
	T data;
	struct nodeCL*next;
	struct nodeCL*prev;
};

////////////////////////////////////////////////
//
//  This is Generic Stack
//
////////////////////////////////////////////////
template<typename T>
struct node
{
	T data;
	struct node*next;
};

////////////////////////////////////////////////
//
//  This is Generic Queue
//
////////////////////////////////////////////////
template<typename T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};

//////////////////////////////////////////////////
//
//  This is Generic Tree
//
//////////////////////////////////////////////////

template<typename T>
struct nodeTree
{
	T data;
	struct nodeTree*lchild;
	struct nodeTree*rchild;
};


/////////////////////////////////////////////////////////////////////
//
// Declaration of Singly Linear LinkedList
//
///////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
private:
   nodeLL<T>*first;
   int size;
   
public:
   SinglyLL();
    void SinglyLL_InsertFirst(T);
    void SinglyLL_InsertLast(T);
    void SinglyLL_InsertAtPos(T,int);
    void SinglyLL_DeleteFirst();	
	void SinglyLL_DeleteLast();
	void SinglyLL_DeleteAtPos(int);
	void SinglyLL_Display();
	int  SinglyLL_Count();
};


//////////////////////////////////////////////////////////////////////
//
//Declaration of Doubly Linear LinkedList
//
//////////////////////////////////////////////////////////////////////

template <class T>
class DoublyLL
{
private:
    nodeLL<T>*first;
	int size;
	
public:
    DoublyLL();
	
	void DoublyLL_Display();
	int  DoublyLL_Count();
	void DoublyLL_InsertFirst(T);
	void DoublyLL_InsertLast(T);
	void DoublyLL_InsertAtPos(T, int);
	void DoublyLL_DeleteFirst();
	void DoublyLL_DeleteLast();
	void DoublyLL_DeleteAtPos(int);
	
};


/////////////////////////////////////////////////////////////
//
// Declaration of Singly Circular LinkedList
//
////////////////////////////////////////////////////////////

template <class T>
class SinglyCL
{
private:
    nodeCL<T>* first;
	nodeCL<T>* last;
	int size;
	
public:
    SinglyCL();
	
	void SinglyCL_Display();
	int  SinglyCL_Count();
	void SinglyCL_InsertFirst(T);
	void SinglyCL_InsertLast(T);
	void SinglyCL_InsertAtPos(T, int);
	void SinglyCL_DeleteFirst();
	void SinglyCL_DeleteAtPos(int);
	void SinglyCL_DeleteLast();
};


//////////////////////////////////////////////////////////////////////
//
// Declaration of Doubly Circular LinkedList
//
//////////////////////////////////////////////////////////////////////

template <class T>
class DoublyCL
{
private:
    nodeCL<T>* first;
	nodeCL<T>* last;
	int size;
	
public:
    DoublyCL();
	void DoublyCL_Display();
	int  DoublyCL_Count();
	void DoublyCL_InsertFirst(T);
	void DoublyCL_InsertLast(T);
	void DoublyCL_InsertAtPos(T, int);
	void DoublyCL_DeleteFirst();
	void DoublyCL_DeleteLast();
	void DoublyCL_DeleteAtPos(int);
	
};

////////////////////////////////////////////////////////
//
// Declaration of Stack
//
////////////////////////////////////////////////////////

template<typename T>
class Stack   
{
private:
     node<T>* first;
	 int size;

public:	 
	 Stack();
	 void push(T);
	 int pop();
	 int Count();
	 void Display();
};

////////////////////////////////////////////////////////
//
// Declaration of Queue
//
///////////////////////////////////////////////////////

template<typename T>
class Queue     
{
private:
    nodeQ<T>* first;
    int size;
    
public:
    Queue();
	void Enqueue(T);
	int Dequeue();
	void Display();
	int Count();
    
};

/////////////////////////////////////////////////////////
//
// Declaration of Tree
//
/////////////////////////////////////////////////////////

template<class T>
class Tree
{
private:
    nodeTree<T>* first;
	int size;
	
public:
    Tree();
	
	void Tree_Insert(T);
	bool Search(T);
	int Count();
};


/////////////////////////////////////////////////////////////////////////
//
// This is Singly Linear LinkedList
//
////////////////////////////////////////////////////////////////////////

template <class T>
   SinglyLL<T> ::SinglyLL()
	{
		first = NULL;
		size = 0;
	}

	
template <class T>	
	void SinglyLL<T> :: SinglyLL_InsertFirst(T no)
	{
	    nodeLL<T>* newn = new nodeLL<T> ;
		
		newn->data = no;
		newn->next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		size++;
	}
	
template <class T>	
	void SinglyLL<T> :: SinglyLL_InsertLast(T no)
	{
		nodeLL<T>* newn = new nodeLL<T> ;
		
		newn->data = no;
		newn->next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			nodeLL<T>* temp = first;
			
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}
	
template <class T>	
	void SinglyLL<T> :: SinglyLL_InsertAtPos(T no, int ipos)
	{
		if((ipos < 1) || (ipos > size+1))
	    {
		      return;
	    }
	
	if(ipos == 1)
	{
		SinglyLL_InsertFirst(no);
	}
	else if (ipos == size +1)
	{
		SinglyLL_InsertLast(no);
	}
	else
	{
		nodeLL<T>* newn = new nodeLL<T>;
			
			newn->data =no;
			newn->next=NULL;
			
			nodeLL<T>* temp = first;
			
			for(int i=1; i<ipos-1; i++)
			{
				temp = temp->next;
			}
			
			newn->next = temp->next;
			temp->next = newn;
			
			size++;
	}
	}
	
template <class T>	
	void SinglyLL<T> ::SinglyLL_DeleteFirst()
	{
		nodeLL<T>* temp = first;
		
		if(first != NULL)   
		{
			first = first->next;
			delete temp;
			
			size--;
		}
	}
	
template <class T>
	void SinglyLL<T> ::SinglyLL_DeleteLast()
	{
		nodeLL<T>*temp = first;
		
		if(first == NULL)
		{
			return;
		}
		
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
			size--;
		}
		else
		{
			while(temp->next->next != NULL)
			{
				temp = temp->next;
			}
			delete temp->next;
			temp->next = NULL;
			size--;
				
		}
	}
	
template <class T>
	void SinglyLL<T> ::SinglyLL_DeleteAtPos(int ipos)
	{
		if((ipos < 1) || (ipos > size))
		{
			return;
		}
		
		if(ipos == 1)
		{
			SinglyLL_DeleteFirst();
		}
		else if(ipos == size)
		{
			SinglyLL_DeleteLast();
		}
		else
		{
			nodeLL<T>*temp = first;
			
			for(int i=1; i<ipos-1; i++)
			{
				temp = temp->next;
			}
			
			nodeLL<T>* targated = temp->next;
			
			temp->next = targated->next;   //temp->next = temp->next->next;
			delete targated;
			
			size--;
		}
	}
	
template <class T>	
	void SinglyLL<T> ::SinglyLL_Display()
	{
		nodeLL<T>* temp = first;
		
		while(temp != NULL)
		{
			cout<<temp->data<<"\t";
			temp = temp->next;
		}
		cout<<"\n";
	}
	
template <class T>	
	int SinglyLL<T> ::SinglyLL_Count()
	{
		return size;
	}
	

///////////////////////////////////////////////////////////////
//
// This is Doubly Linear LinkedList
//
///////////////////////////////////////////////////////////////


template <class T>
DoublyLL<T>::DoublyLL()
	{
		first = NULL;
		size =0;
	}

template <class T>	
void DoublyLL<T> :: DoublyLL_InsertFirst(T no)
{
	nodeLL<T>* newn = new nodeLL<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}
	size++;	
}

template <class T>
void DoublyLL<T> :: DoublyLL_InsertLast(T no)
{
	nodeLL<T>* newn = new nodeLL<T>;
	nodeLL<T>* temp = first;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = newn;
		newn->prev = temp;
	}
    size++;	
}

template <class T>
void DoublyLL <T>:: DoublyLL_Display()
{
	nodeLL<T>* temp = first;
	
	for(int i=1; i<=size; i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

template <class T>
int DoublyLL <T>::DoublyLL_Count()
{
	return size;
}

template <class T>
void DoublyLL<T> :: DoublyLL_DeleteFirst()
{
	nodeLL<T>* temp = first;
	
	if(first == NULL)
	{
		return;
	}
	
	else
	{
		first = first->next;
		first->prev = NULL;
	    delete(temp);
	}
	size--;
}

template <class T>
void DoublyLL<T> :: DoublyLL_DeleteLast()
{
	if(first == NULL)
	{
		return;
	}
	else if(first->next == NULL)
	{
		delete first;
		first = NULL;
	}
	else
	{
		nodeLL<T>* temp = first;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		delete temp;
	}
	size--;
}

template <class T>
void DoublyLL<T> :: DoublyLL_InsertAtPos(T no, int ipos)
{
	if((ipos < 1) || (ipos > size+1))
	{
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if (ipos == size +1)
	{
		InsertLast(no);
	}
	else
	{
		nodeLL<T>* newn = new nodeLL<T>;
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		nodeLL<T>* temp = first;
		
		for(int i=1; i<ipos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		newn->prev = temp;
		temp->next = newn;
		
		size++;
	}
	
}

template <class T>
void DoublyLL<T> :: DoublyLL_DeleteAtPos(int ipos)
{
	if((ipos < 1) || (ipos > size))
	{
		return;
	}
	
	if(ipos == 1)
	{
		DoublyLL_DeleteFirst();
	}
	else if (ipos == size)
	{
		DoublyLL_DeleteLast();
	}
	else
	{
		nodeLL<T>* temp = first;
		
		for(int i= 1; i< ipos-1; i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		
		size--;
		
	}
	
}

////////////////////////////////////////////////////////////////
//
// This is Singly Circular LinkedList
//
////////////////////////////////////////////////////////////////


template <class T>
SinglyCL<T>::SinglyCL()
	{
		first = NULL;
		last = NULL;
		size = 0;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_Display()
	{
		nodeCL<T>* temp = first;
		
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		
		do
		{
			cout<<"|"<<temp->data<<"|->";
			temp = temp->next;
		}while(temp != last->next);
		
		cout<<"NULL\n";
			
	}

template <class T>	
int SinglyCL<T>::SinglyCL_Count()
	{
		return size;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_InsertFirst(T no)
	{
		nodeCL<T>* newn = new nodeCL<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		if((first == NULL ) && (last == NULL))
		{
			first = newn;
			last = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		
		last->next = first;
		size++;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_InsertLast(T no)
	{
		nodeCL<T>* newn = new nodeCL<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		if((first == NULL ) && (last == NULL))
		{
			first = newn;
			last = newn;
		}
		else
		{
			last->next =newn;
			last = newn;
		}
		
		last->next = first;
		size++;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_InsertAtPos(T no, int ipos)
	{
		if((ipos < 1) || (ipos >(size+1)))  
		{
			return;
		}
		
		if(ipos == 1)
		{
			SinglyCL_InsertFirst(no);
		}
		else if(ipos == size+1)
		{
			SinglyCL_InsertLast(no);
		}
		else
		{
			nodeCL<T>* newn = new nodeCL<T>;
			
			newn->data =no;
			newn->next=NULL;
			
			nodeCL<T>* temp = first;
			
			for(int i=1; i<ipos-1; i++)
			{
				temp = temp->next;
			}
			
			newn->next = temp->next;
			temp->next = newn;
			
			size++;
		}
	
	}

template <class T>	
void SinglyCL<T>::SinglyCL_DeleteFirst()
	{
		nodeCL<T>* temp = first;
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		else if(first == last)
		{
			delete first;
			first = NULL;
			last = NULL;
		}
		else
		{
			first = first->next;
			delete temp;
			last->next = first;
		}
	     size--;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_DeleteLast()
	{
		nodeCL<T>* temp = first;
		
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		else if(first == last)
		{
			delete last;
			first = NULL;
			last = NULL;
		}
		else
		{
			while(temp->next != last)
			{
				temp = temp->next;
			}
			
			delete last;
			last = temp;
			
			last->next = first;
		}
	     size--;
	}

template <class T>	
void SinglyCL<T>::SinglyCL_DeleteAtPos(int ipos)
	{
		if((ipos < 1) || (ipos > size))
		{
			return;
		}
		
		if(ipos == 1)
		{
			SinglyCL_DeleteFirst();
		}
		else if(ipos == size)
		{
			SinglyCL_DeleteLast();
		}
		else
		{
			nodeCL<T>* temp = first;
			
			for(int i=1; i<ipos-1; i++)
			{
				temp = temp->next;
			}
			
			nodeCL<T>* targated = temp->next;
			
			temp->next = targated->next;   
			delete targated;
			
			size--;
		}
	}


/////////////////////////////////////////////////////////////////
//
// This is Doubly Circular LinkedList
//
////////////////////////////////////////////////////////////////


template <class T>
DoublyCL<T>::DoublyCL()
	{
		first = NULL;
		last = NULL;
		size =0;
	}

template <class T>
void DoublyCL<T> :: DoublyCL_InsertFirst(T no)
{
	nodeCL<T>* newn = new nodeCL<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}
	last->next = first;
	first->prev = last;
	size++;	
}

template <class T>
void DoublyCL <T>:: DoublyCL_InsertLast(T no)
{
	nodeCL<T>* newn = new nodeCL<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next = newn;
		newn->prev = last;
		last = newn;
	}
	last->next = first;
	first->prev = last;
	size++;	
}

template <class T>
void DoublyCL<T> :: DoublyCL_Display()
{
	nodeCL<T>* temp = first;
	
	for(int i=1; i<=size; i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}
	cout<<"\n";
}

template <class T>
int DoublyCL<T> :: DoublyCL_Count()
{
	return size;
}

template <class T>
void DoublyCL<T> :: DoublyCL_DeleteFirst()
{
	if((first == NULL) && (last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete last->next;
		
		first->prev = last;
	    last->next = first;
	
	}
	size--;
}

template <class T>
void DoublyCL<T> :: DoublyCL_DeleteLast()
{
	if((first == NULL) && (last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		last =last->prev;
		delete last->next;
		
		first->prev = last;
	    last->next = first;
	}
	size--;
}

template <class T>
void DoublyCL <T>:: DoublyCL_InsertAtPos(T no, int ipos)
{
	if((ipos < 1) || (ipos > size+1))
	{
		return;
	}
	
	if(ipos == 1)
	{
		DoublyCL_InsertFirst(no);
	}
	else if (ipos == size +1)
	{
		DoublyCL_InsertLast(no);
	}
	else
	{
		nodeCL<T>* newn = new nodeCL<T>;
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		nodeCL<T>* temp = first;
		
		for(int i=1; i<ipos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		newn->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
		
		size++;
	}
	
}

template <class T>
void DoublyCL<T> :: DoublyCL_DeleteAtPos(int ipos)
{
	if((ipos < 1) || (ipos > size))
	{
		return;
	}
	
	if(ipos == 1)
	{
		DoublyCL_DeleteFirst();
	}
	else if (ipos == size)
	{
		DoublyCL_DeleteLast();
	}
	else
	{
		nodeCL<T>* temp = first;
		
		for(int i= 1; i< ipos-1; i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		
		size--;
		
	}
	
}

///////////////////////////////////////////////
//
// This is Stack
//
///////////////////////////////////////////////

template<class T>
Stack<T>::Stack()
	 {
		 first = NULL;
		 size = 0;
	 }

template<class T>	 
void Stack<T>:: push(T no)  //InsertFirst()
	 {
		node<T>* newn = new node<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		size++;
	 }

template<class T>		 
int Stack<T>::pop()  
	 {
		node<T>* temp = first;
		int no = 0;
		
		if(size == 0)
		{
			cout<<"Stack is empty"<<"\n";
			return -1;
		}
		
		
		if(size == 1)   
		{
			no = first->data;
			delete first;
			first = NULL;
		}
		else
		{
			no = first->data;
			first = first->next;
			delete temp;
		}
		
		size--;
		return no;
	 }

template<class T>		 
void Stack<T>::Display()
	 {
		node<T>* temp = first;
		
		while(temp != NULL)
		{
			cout<<"|"<<temp->data<<"|->";
			temp = temp->next;
		}
		cout<<"\n"; 
	 }
template<class T>	 
int Stack<T>::Count()
	 {
		 return size;
	 }
	 
	 
	 
//////////////////////////////////////////////////////////
//
//   This is Queue
//
//////////////////////////////////////////////////////////

template<class T>
Queue<T>::Queue()
    {
        first = NULL;
        size = 0;
    }

template<class T>    
void Queue<T>::Enqueue(T no)   
    {
        nodeQ<T>*newn = new nodeQ<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		if(size == 0)
		{
			first = newn;
		}
		else
		{
			nodeQ<T>* temp = first;
			
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
    }

template<class T>    
int Queue<T>::Dequeue()   
    {
        nodeQ<T>* temp = first;
		int no = 0;
		
		if(size == 0)
		{
			cout<<"Queue is empty"<<"\n";
			return -1;
		}
		
		
		if(size == 1)   // (size != 0)
		{
			no = first->data;
			delete first;
			first = NULL;
		}
		else
		{
			no = first->data;
			first = first->next;
			delete temp;
		}
		
		size--;
		return no;
    }

template<class T>    
void Queue<T>::Display()
    {
		nodeQ<T>* temp = first;
		
		for(int i=1; i<=size; i++,temp=temp->next)
		{
			cout<<"|"<<temp->data<<"|->";
		}
		cout<<"\n";
	}

template<class T>    
int Queue<T>::Count()
    {
        return size;
    }
	

///////////////////////////////////////////////////////
//
// This is Tree
//
//////////////////////////////////////////////////////

template<class T>
Tree<T> :: Tree()
{
	first = NULL;
    size = 0;
}

template<class T>
void Tree<T> :: Tree_Insert(T no)
{
	nodeTree<T>* newn = new nodeTree<T>;
	
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		nodeTree<T>* temp = first;
		
		while(1)   //Unconditional loop     for( ; ;)  or while(true)
		{
			if(temp->data == no)
			{
				cout<<"Duplicate node\n";
				delete newn;
				break;
			}
			else if(no < (temp->data)) // smaller data
			{
                if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(no > (temp->data)) // bigger data
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
}

template<class T>
bool Tree<T> :: Search(T no)
{
	if(first == NULL)    //if tree is empty
	{
		return false;
	}
	else     //tree contains atleast one node or more node
	{
		while(first != NULL)
		{
			if(first->data == no)  //node is found
			{
				break;
			}
			else if(no > (first ->data))
			{
				first = first->rchild;
			}
			else if(no < (first->data))
			{
				first = first->lchild;
			}
		}
		if(first == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

template<class T>
int Tree<T> :: Count()
{
	return size;
}

	
	
int main()
{
	
	Stack<int> obj;
	
	obj.push(11);
	obj.push(21);
	obj.push(51);
	obj.push(101);
	
	cout<<"Elements of stack\n";
	obj.Display();
	
	int iret = obj.pop();   //101
	cout<<"Poped element is : "<<iret<<"\n";
	
	cout<<"Elements of stack\n";
	obj.Display();
	iret=obj.Count();
	cout<<"Size of stack is : "<<iret<<"\n";
	
	return 0;
}