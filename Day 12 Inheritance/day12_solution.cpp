#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string firstName, string lastName, int identification, vector<int> testscores):Person(firstName,lastName,identification),testScores(testscores)
        {
		}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            unsigned int average = 0;
            char rtn;
            unsigned int size = (int)testScores.size();
            for (int index=0; index<size; ++index) {
                average += testScores.at(index);
            }
            average /=size;
            if(average >= 90)
                 rtn = 'O';
            else if (average >= 80 && average < 90)
                 rtn = 'E';
            else if (average >= 70 && average < 80)
                 rtn = 'A';
            else if(average >= 55 && average < 70)
                 rtn = 'P';
            else if (average >= 40 && average < 55)
                 rtn = 'D';
            else
                 rtn = 'T';
            return rtn ;
        }
};



int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}