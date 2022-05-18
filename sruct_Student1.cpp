#include <iostream>
#include <cstring>

struct Student {
	std::string name ;
	std::string surname ;
	int age ;
	std::string subjects [5];

} stud1 , stud2 , studmix ;


Student set_student (Student stud, int index)
{
	std::cout << "Enter the name of student " << index << " " ;
	std::cin >> stud.name ;
	std::cout << "Enter the surname of student " << index << " " ;
        std::cin >> stud.surname ;
	std::cout << "Enter the age of student " << index << " " ;
        std::cin >> stud.age ;
	for(int i = 0 ; i < 5 ; i++)
	{
		std::cout << "Enter the subect # " << i + 1 << " of student " << index << " " ;
 		std::cin >> stud.subjects[i] ;
	}

	return stud ;
}

Student task_b( Student stud)
{
	stud.name = stud1.name ;
	stud.surname = stud2.surname ;
	stud.age = stud1.age ;
	for(int i = 0 ; i < 5 ; i++)
	{
		stud.subjects[i] = stud2.subjects[i] ; 
	}
	return stud ;
}


void print_student(Student stud)
{
	std::cout << stud.name << " " << stud.surname << std::endl ;
	std::cout << " is " << stud.age << " years old and  he study " ;
	for(int i = 0 ; i < 5 ; i++)
	{
		std::cout << stud.subjects[i] << " " ;
	}
	
}

int main()
{
	stud1 = set_student(stud1,1) ;
	stud2 = set_student(stud2,2) ;
	if(stud1.age > stud2.age)
		std::cout << stud1.name << " " << stud1.surname << std::endl ;
	else
		std::cout << stud2.name << " " << stud2.surname << std::endl ;
	studmix = task_b(studmix) ;
	print_student(studmix) ;

	return 0 ;
}



