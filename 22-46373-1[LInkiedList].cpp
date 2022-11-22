#include <iostream>

using namespace std;

class Student
{
public:
    int roll;
    int id;
    string name;
    Student(){}
    Student(int roll,int id,string name)
    {
        this->roll = roll;
        this->id = id;
        this->name = name;
    }
};
class Node{

public:
    Student data ;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(Student data){
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->data != NULL){
            cout<<head->data .roll<< " "<<head->data.id<<" "<<head->data.name<<endl;
            head = head->next;
        }
    }
};

int main()
{

   LinkedList *myList = new LinkedList();
   Student s1(12,34,"Abdullah");
   Student s2(13,35,"Ronaldo");
   Student s3(14,36,"Messi");

   myList->createNewNode(s1);
   myList->createNewNode(s2);
   myList->createNewNode(s3);

   myList->ShowList();

    return 0;
}
