/*             SUMMER TRAINING -> DSA PROJECT
					MADE BY:
					ISHAAN JAIN
					CSE-B / 06117702722
					ishaanj2612@gmail.com
*/


                    #include <iostream>
                    #include <string.h>
                    #include <fstream>
                    #include<stdlib.h>
                    using namespace std;
                    
                    void linkList();
                    void stack();
                    void queue();
                    void input();
                    void again();
                    
                    int room_no;
                    string name;
                    string address;
                    string phone;
                    int option;
                    int key;
                    int no_clothes;
                    string choice;
                    
                    // THIS IS IMPLEMENTATION OF LINKED LIST
                    // IN THIS PROJECT ALL CUSTOMER DETAILS AND ROOM BOOKING ARE HANDLED THROUGH LINKEDLIST
                    // **************************** LinkedList ************************************
                    
                    // Elements in a node
                    class Node
                    {
                    public:
                        int room_no;
                        string name;
                        string address;
                        string phone;
                        Node* next;
                        
        Node(int room_no, string name, string address, string phone)
        {
            this->room_no = room_no;
            this->name = name;
            this->address = address;
            this->phone = phone;
            next = NULL;
        }                    };
                    
                    // Creation of a Node
                    class LinkList
                    {
                    public:
                        Node *head;
                    
                    public:
                    
                        LinkList()
                        {
                            head = NULL;
                        }
                    
                    // Function for insertion in Head
                    /*	void insertAtHead(int room_no1, string name1, string address1, string phone1)
                        {
                            Node* newNode = new Node(room_no1, name1, address1, phone1);
                        
                            newNode->room_no = room_no1;
                            newNode->name = name1;
                            newNode->address = address1;
                            newNode->phone = phone1;
                        
                            //ptr->next = NULL;
                            newNode->next = head;
                            head = newNode;
                        } */
                        
                        
                        // This is a fuction to insert values in the end / tail node
                        void insertAtTail(int room_no1, string name1, string address1, string phone1)
                        {
                            //ofstream fout("Record.txt", ios::app);	
                        
                            Node* newNode = new Node(room_no1, name1, address1, phone1);
                        
                            newNode->room_no = room_no1;
                            newNode->name = name1;
                            newNode->address = address1;
                            newNode->phone = phone1;
                            newNode->next = NULL;
                            
                            // Here it checks if the node is Head is NULL then it place value in it
                            // Otherwise it traverse the nodes and when it finds NULL it place the new values there
                        
                            if(head == NULL)
                                head = newNode;
                            else
                            {
                                Node *temp = head;
                        
                                while(temp ->next != NULL)
                                    temp = temp->next;
                        
                                temp->next = newNode;
                            }
                            
                            cout << "\n\nROOM BOOKED!\n\n";
                            //fout<< "Room No: "<<room_no1<<" Name: "<<name1<<" Address: "<<address1<<" Phone No: "<<phone1<< "\n";
                            //fout.close();
                        }
                    
                    // Function for deleting head node
                    
                    /*	void deleteAtHead()
                        {
                            if(head == NULL)
                                return;
                            else
                            {
                                Node * temp = head;
                                head = head->next;
                                cout << "\n\n DELETED!\n\n";
                                delete temp;
                            }
                        } */
                        
                    // Function for deletion of the tail / last node
                        void deleteAtTail()
                        {
                            if ( head == NULL)			// It check that for is any node there or not
                            {							// If the list is empty then it returns
                                return;					// otherwise it travers and delete last node
                            }
                            else
                            {
                                Node * current = head;
                                Node * previous = head;
                        
                                while(current->next!=NULL)
                                {
                                    previous=current;
                                    current=current->next;
                                }
                                cout << "\n\n DELETED!\n\n";
                                previous->next=NULL;
                                delete current;
                            }
                        }
                        
                    // This function is to delete any specific node
                    // Value KEY which is room no is entered and it is then removed
                        void deleteSpecificNode(int key)
                        {
                            Node *current,*previous;
                            current=previous=head;
                            while(current!=NULL)
                            {
                                if(current->room_no==key)
                                {
                                    if(current==previous)
                                    {
                                        head=head->next;
                                    }
                                    else
                                    {
                                        previous->next=current->next;
                                    }
                                    delete current;
                                    break;
                                }
                                previous = current;
                                current = current -> next;
                            }
                        }
                        
                    // This function is to delete the entire list
                        void deleteList()
                        {
                            delete head;
                            head=NULL;
                        }
                    
                    // This function displays all the nodes / values in the list
                        void print()
                        {
                            Node *temp = head;
                        
                            while(temp != NULL)
                            {
                                cout<< "\n\nROOM NO: " << temp->room_no<<"\n";
                                cout<< "NAME: "<<temp->name<<"\n";
                                cout<< "ADDRESS: "<<temp->address<<"\n";
                                cout<< "PHONE NO: "<<temp->phone<<"\n\n";
                                temp = temp->next;
                            }
                        }
                    
                    };
                    
                    
                    // THIS IS IMPLEMENTATION OF QUEUE
                    // IN THIS PROJECT WE ARE HANDLING RESTURANT USING QUEUE
                    
                    //************************************* QUEUE *************************************
                    
                    // Elements / values for a node in Queue
                    class QNode
                    {
                    public:
                        int room_no;
                        string choice;
                        QNode* next;
                    
                        QNode(int room_no, string choice)
                        {
                        next = NULL;
                        }
                    };
                    
                    
                    class QLinkList
                    {
                    public:
                        QNode* head;
                    
                        
                    QLinkList()
                    {
                        head = NULL;
                    }
                    
                    
                    // This function creates and inserts a node at the start of Queue
                    
                    // X --> A --> B -- C --> D --> E
                    
                    // Suppose above is a queue so new node will added before A at the place of X
                    void insertAtHead(int room_no1, string choice)
                    {
                        QNode* newNode = new QNode(room_no1, choice);
                    
                        newNode->room_no = room_no1;
                        newNode->choice = choice;
                        newNode->next = head;
                        head = newNode;
                    }
                    
                    // This function deletes or remove a node from Queue
                    
                    // A --> B -- C --> D --> E
                    
                    // If we perfrom this funciton E will be removed
                    void deleteAtTail()
                    {
                        if ( head == NULL)
                        {
                            return;
                        }
                        else
                        {
                            QNode * current = head;
                            QNode * previous = head;
                    
                            while(current->next!=NULL)
                            {
                                previous=current;
                                current=current->next;
                            }
                            cout << "\n\n REMOVED!\n\n";
                            previous->next=NULL;
                            delete current;
                        }
                    }
                    
                    // This displays all the nodes / values in queue
                    void print()
                    {
                        QNode* temp = head;
                    
                        while(temp != NULL)
                        {
                            cout<< "\n\nROOM NO: " << temp->room_no<<"\n";
                            cout<< "Dinning: "<<temp->choice<<"\n\n\n";
                            temp = temp->next;
                        }
                    }
                    };
                    
                    // This is the class from where function of Queue are being called
                    class Queue
                    {
                    public:
                        int size;
                        QLinkList qll;      
                        int count;
                    
                    
                    void enQueue(int room_no1, string choice)
                    {
                        qll.insertAtHead(room_no1, choice);
                        count++;
                    }
                    
                    void deQueue()
                    {
                        qll.deleteAtTail();
                        count--;
                    }
                    
                    void peek()
                    {
                        qll.print();
                    }
                    
                    };
                    
                    
                    // THIS IS THE IMPLEMENTATION OF STACH
                    // ALL THE LAUNDRY THIS PROJECT IS BEING HANDLED BY STACK
                    // ******************************** STACK ********************************************
                    
                    // Elements /values in the stack
                    class SNode
                    {
                    public:
                        int room_no;
                        int no_clothes;
                        SNode* next;
                    
                        SNode(int room_no, int no_clothes)
                        {
                            next = NULL;
                        }
                    };
                    
                    class SLinkList
                    {
                    public:
                        SNode *head;
                        
                        SLinkList()
                    {
                        head = NULL;
                    }
                    
                    // This function creates first/head node
                    void insertAtHead(int room_no1, int no_clothes)
                    {
                        SNode* newNode = new SNode(room_no1, no_clothes);
                    
                        newNode->room_no = room_no1;
                        newNode->no_clothes = no_clothes;
                        newNode->next = head;
                        head = newNode;
                    
                    }
                    // This function deletes first/head node as it happen in stact FIRST IN LAST OUT
                    void deleteAtHead()
                    {
                        if(head == NULL)
                            return;
                        else
                        {
                            SNode * temp = head;
                            head = head->next;
                            cout << "\n\n POPPED!\n\n";
                            delete temp;
                        }
                    }
                    
                    // This function display values in the nodes
                    void print()
                    {
                        SNode *temp = head;
                    
                        while(temp != NULL)
                        {
                            cout<< "\n\nROOM NO: " << temp->room_no<<"\n";
                            cout<< "No of Clothes: "<<temp->no_clothes<<"\n\n\n";
                            temp = temp->next;
                        }
                    }
                    };
                    
                    // This is the class from where function of Stack are being called
                    class Stack
                    {
                    public:
                        int size;
                        SLinkList sll;      
                        int count;
                    
                    
                    void push(int room_no1, int no_clothes)
                    {
                        sll.insertAtHead(room_no1, no_clothes);
                        count++;
                    }
                    
                    void pop()
                    {
                        sll.deleteAtHead();
                        count--;
                    }
                    
                    void peek()
                    {
                        sll.print();
                    }
                    
                    };
                    
                    
                    /////////////////////////////////////////////////////////////// MAIN ///////////////////////////////////////////////////////////////////////////////////
                    int main()
                    {
                        system("CLS");
                        cout<<"\n****************************";
                        cout<<"\n* HOTEL MANAGEMENT SYSTEM  *";
                        cout<<"\n****************************";
                    
                        do
                        {
                            cout << "\n1. BOOK ROOM \n";
                            cout << "2. LAUNDRY \n";
                            cout << "3. RESTURANT \n";
                            cout << "4. Exit \n";
                            cout << "\nSelect option : ";
                            cin >> option;
                            cout<<endl;
                    
                            switch(option)
                            {
                            case 1:
                                linkList();
                                break;
                            case 2:
                                stack();
                                break;
                            case 3:
                                queue();
                                break;
                            case 4:
                                exit(true);
                                break;
                            default:
                                break;
                            }
                        }
                        while(option != -1);
                    }
                    
                    //*************************** LINKEDLIST **********************************
                    
                    void linkList()
                    {
                        LinkList ll;
                        system("CLS");
                        do
                        {
                            cout << "                 ROOM BOOKING";
                            cout << "\n\n1. For Entering Details \n";
                            cout << "2. Remove (Specific Room) \n";
                            cout << "3. Remove (All) \n";
                            cout << "4. Display \n";
                            cout << "5. Main Menu\n";
                            cout << "6. Exit \n";
                            cout << "Select option : ";
                            cin >> option;
                    
                            switch(option)
                            {
                            case 1:
                                cout << "\nPlease Enter Room Number : ";
                                cin >> room_no;
                                    if(room_no > 200){
                                        cout << "\nRoom out of range !!\nPlease enter within 200\n\n";				// Task given by Sir
                                        break;
                                        }
                                cout << "Please Enter the Guest Name : ";
                                cin >> name;
                                cout << "Please Enter Address(from where guest is) : ";
                                cin >> address;
                                cout << "Please Enter Guest Phone no : ";
                                cin >> phone;
                                ll.insertAtTail(room_no, name, address, phone);
                                break;
                            
                            case 2:
                                cout << "Enter Room No : ";
                                cin >> key;
                                ll.deleteSpecificNode(key);
                                break;
                            case 3:
                                ll.deleteList();
                                break;
                            case 4:
                                ll.print();
                                break;
                            case 5:
                                return; // Return to main menu
                                break;
                            case 6:
                                exit(true);
                                break;
                            default:
                                cout << "Invalid option !!";
                                break;
                            }
                        }
                        while(option != -1);
                        
                    }
                    
                    
                    //******************************* STACK ****************************
                    void stack()
                    {
                        Stack st;
                        system("CLS");
                        do
                        {
                            cout << "                 LAUNDRY";
                            cout << "\n\n1. Give Clothes for Wash & Press (Push) \n";
                            cout << "2. Deliver Clothes for Wash & Press (Pop) \n";
                            cout << "3. Display \n";
                            cout << "4: Main Menu\n";
                            cout << "5. Exit \n";
                            cout << "Select option : ";
                            cin >> option;
                    
                        
                            switch(option)
                            {
                            case 1:
                                    cout << "\nPlease Enter Room Number : ";
                                    cin >> room_no;
                                    if(room_no > 200){
                                        cout << "\nRoom out of range !!\nPlease enter within 200\n\n";
                                        break;																			// Task given by Sir
                                        }
                            
                                cout << "Please Enter No of Clothes : ";
                                cin >> no_clothes;
                                    if(no_clothes > 50){
                                        cout << "\nToo many clothes !!\nPlease enter within 50\n\n";
                                        break;
                                    }
                                st.push(room_no, no_clothes);
                                break;
                            case 2:
                                st.pop();
                                break;
                            case 3:
                                st.peek();
                                break;
                            case 4:
                                return; // Return to main menu
                                break;
                            case 5:
                                exit(true);
                                break;
                            
                            default:
                                cout << "Invalid option !!";
                                break;
                            }
                        }
                    
                        while(option != -1);
                    }
                    
                    
                    //******************************** QUEUE ***********************************
                    void queue()
                    {
                        Queue q;
                        system("CLS");
                        do
                        {
                            cout << "                 RESTURANT";
                            cout << "\n\n1. Reservation (EnQueue) \n";
                            cout << "2. Dining Done (DeQueue) \n";
                            cout << "3. Display \n";
                            cout << "4. Main Menu\n";
                            cout << "5. Exit \n";
                            cout << "Select option : ";
                            cin >> option;
                    
                            switch(option)
                            {
                            case 1:
                                cout << "**************MENU**************\n";
                                cout << "*     Breakfast   8am - 11am   *\n";
                                cout << "*     Lunch       12pm - 3pm   *\n";
                                cout << "*     Hi Tea      4pm - 7pm    *\n";
                                cout << "*     Dinner      8pm - 2am    *\n";
                                cout << "********************************\n";
                    
                                cout << "Enter room number : ";
                                cin >> room_no;
                                    if(room_no > 200){
                                        cout << "\nRoom out of range !!\nPlease enter within 200\n\n";							// Task given by Sir
                                        break;
                                        }
                                cout << "Enter Choice for Desired Dinning : ";
                                cin >> choice;
                                q.enQueue(room_no, choice);
                                break;
                            case 2:
                                q.deQueue();
                                break;
                            case 3:
                                q.peek();
                                break;
                            case 4:
                                return; // Return to main menu
                                break;
                            case 5:
                                exit(true);
                                break;
                            default:
                                cout << "Invalid option !!";
                                break;
                            }
                        }
                        while(option != -1);
                    }
                    
                    