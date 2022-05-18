#include <iostream>


struct Student{
	std::string name;
	std::string surname;
	int grades[3];
};






int main()
{
	const int count = 25 ;
	Student students [count] ;

	for (int i = 0 ; i < count ;i++)
	{
		std::cout << "Enter the name of the student " << i <<" "  ;
		std::cin >> students[i].name;
		std::cout << "Enter the surname of the student " << i << " " ;
                std::cin >> students[i].surname;
		for(int j = 0 ; j < 3 ; j++)
		{
			std::cout << "Enter the grade number " << j+1 << " of the student " << i << " "  ;
			std::cin >> students[i].grades[j];
		}

	}

	
	for(int i = 0 ; i < count ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			if(students[i].grades[j] <= 61)
			{
				std::cout << students[i].name << " " << students[i].surname << std::endl ;
				break ;
			}
		}
	}


	return 0 ;
}
