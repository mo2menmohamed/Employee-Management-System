#include <iostream>
using namespace std;
class Employee
{
private:

    string Full_Name ;
    string Email ;
    string Phone;
    string Position ;
    double Salary ;

public:
    Employee()
    {

    }
//// constructor take all variable as parameters
	Employee(string fn, string e , string ph , string p , double s)
	    {
		Full_Name = fn;
		Email=e;
		Phone=ph;
		Position=p;
		Salary=s;
    	}
//// set Full_Name
     void setFullname(string n)
     {
         Full_Name=n;
     }
//// get Full_Name
    string getFullname()
    {
        return Full_Name;
    }
//// set Email
     void setEmail(string e)
     {
         Email=e;
     }
//// get Email
    string getEmail()
    {
        return Email;
    }
//// set phone
     void setphone(string ph)
     {
         Phone=ph;
     }
//// get Phone
    string getPhone()
    {
        return Phone;
    }
//// set Position
     void setPosition(string p)
     {
         Position=p;
     }
//// get Position
    string getPosition()
    {
        return Position;
    }
//// set salary
    void setsalary(double s)
     {
         Salary=s;
     }
//// get salary
    double getSalary()
     {
        return Salary;
     }
};
//////////////////////////////////////
template <class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T e){
            data = e;
            next = NULL;
        }
};
///////////////////////////////////////
template <class T>
class EmployeeList{
	Node<T>* head;
    public:
    	EmployeeList()
    	{
    	    head = NULL;
    	}
//// insert function
    	bool insert_employee(T e){
    		Node<T>* newNode = new Node<T>(e);
    		Node<T>* temp=head;
    		if (head==NULL)
            {
                head=newNode;
                return true ;
            }
            while(temp!=NULL)
            {
               if (temp->data.getEmail()==e.getEmail())
               {
                   return false;
               }
               temp=temp->next;
            }
           temp=head;
           while(temp->next!=NULL)
           {
               temp=temp->next;
           }
           temp->next=new Node<T>(e);
           return true ;
    	}
//// display function
    int display_employee_info()
    {
         		Node<T>* temp=head;
  while(temp!=NULL)
   {

   cout << "Full name: " << temp->data.getFullname() << endl;

   cout << "Email: " << temp->data.getEmail() << endl;

   cout << "Phone: " << temp->data.getPhone() << endl;

   cout << "Position: " << temp->data.getPosition() << endl;

   cout << "Salary: " << temp->data.getSalary() << endl;

     temp=temp->next;
    }
    char click;
    cout<<"  to get back to menu click 0 : \n" ;
    getchar();
    click=getchar();

    switch(click)
    {
    case '0':
        {
            return 1;
        }
return 1 ;
     }
    }
//// edit salary function
     bool edit_salary( string email,double new_salary )
     {

         if (head == NULL)
            {
			cout<<"list is empty"<<endl;
			return false;
		    }

		else{
			Node<T>* temp = head;
			while(temp != NULL)
                {
				if (temp->data.getEmail() == email)
				{
					temp->data.setsalary(new_salary)  ;
					return true;
				}
			temp = temp->next;
			    }
	return false;
	       }
     }
//// delete function
     bool delet_Employy(string email)
     {
         Node<T>* temp = head;
         Node<T>* temp2 = head;

         while(temp!=NULL)
         {
             if(temp->data.getEmail()== email)
             {
                 if(temp=head)
                 {
                     head=head->next;
                     delete temp;
                 }
                 else
                 {
                     temp2->next=temp->next;
                 }
                cout<< "Employee with email "<<email<<" has ramoved"<<endl;
                break;
             }

             temp2=temp;
             temp=temp->next;
         }
         cout<<"your email dose not exist";
                 cout<<"\n";
        return true;
     }
};
////////////////////////////////////////////////s
int main();
EmployeeList<Employee> L;

//// edit function 2

 void edit_salary2(){
    double s2;
    string email2;
    cout<<"enter employee email : ";
    cin>>email2;
    cout<<"enter new salary : ";
    cin>>s2;
    L.edit_salary(email2 , s2);
    char click;
    cout<<" to print new info click 1 to get back to menu click 2 : \n" ;
    getchar();
    click=getchar();

    switch(click)
    {
    case '1':
        {
            if( L.display_employee_info())
            {
                main();
            }
            break;
        }
    case '2':
        {
            main();
        }
    }

    }

//// insert function 2
int main();
 void insert2(){
    string Full_Name2 ;
    string Email3 ;
    string Phone2;
    string Position2 ;
    double Salary2 ;
cout<<"enter the employee name : ";
    cin>>Full_Name2;
cout<<"enter the employee mail : ";
    cin>>Email3;
cout<<"enter the employee Number : ";
    cin>>Phone2;
cout<<"enter the employee Position : ";
    cin>>Position2;
cout<<"enter the employee salary : ";
    cin>>Salary2;
    Employee E1(Full_Name2,Email3,Phone2,Position2,Salary2);
    L.insert_employee(E1);
    char click;
    cout<<" to enter the another employee click 1 to get back to menu click 2 : \n" ;
    getchar();
    click=getchar();

    switch(click)
    {
    case '1':
        {
            insert2();
            break;
        }
    case '2':
        {
            main();
            break;
        }
    }
 }

////delete function 2

 void delete2(){
     string del_email;
     cout<<"enter your email want to delete : ";
     cin>>del_email ;
     L.delet_Employy(del_email);
    char click;
    cout<<" to enter the another employee click 1 to get back to menu click 2 : \n" ;
    getchar();
    click=getchar();

    switch(click)
    {
    case '1':
        {
            insert2();
            break;
        }
    case '2':
        {
            main();
            break;
        }
    }
 }
int main() {
    fflush(stdin);
    cout<<"Welcome to the Employee Management System"<<endl;
    cout<<"Choose of the following to use the system features"<<endl;
    cout<<"1. Insert a new Employee"<<endl;
    cout<<"2. Edit employee's salary"<<endl;
    cout<<"3. Delete an employee"<<endl;
    cout<<"4. Print all employees"<<endl;
    cout<<"5. Close the program"<<endl;
        char click;
    click=getchar();

    switch(click)
    {
        case '1':
        {
            insert2();
            break;
        }
        case '2':
        {
            edit_salary2();
            break;
        }
        case '3':
        {
            delete2();
            break;
        }
        case '4':
        {
            if(L.display_employee_info())
            {
                main();
            }
            break;
        }
        case '5':
        {
            break;
        }
    }
    return 0;
}
