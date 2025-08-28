#include <iostream>
using namespace std;

int main() {
	// Declare variables for length of decorative line and number of coreses
	int choice;
    int length = 120;  
    
    // Print a decorative line
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) { 
            cout << "--";
        } else {   
            cout << "";
        }
    }
    
	cout <<endl;
	// Print the title 
	cout << " GPA & CGPA Calculator (Developed by Ohid)" << endl;
length = 120; 
 
     // Print another decorative line  
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) { 
            cout << "--";
        } else {   
            cout << "";
        }
    }
	cout<<endl;
	cout<<endl;
	
    // Display the menu options 
	cout << " MENU:" << endl;
	cout << " 1. Calculate GPA (Grade Point Average)" << endl;
	cout << " 2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
	cout << " 3. Method that is applied here for calculating GPA & CGPA" << endl;
	cout << " 4. Exit Application" << endl;
length = 120;
   for (int i = 0; i < length; i++) {
        if (i % 2 == 0) { 
            cout << "--";
        } else {   
            cout << "";
        }
    }
    cout <<endl;
    // Prompt the user to choose an option
	cout << "Enter your choice: ";
	cin >> choice;


	switch (choice) {
	case 1: {
		double numSubjects;
		cout << "------------- GPA Calculating --------------" << endl;
		cout << "How many subject's points do you want to calculate? : ";
		cin >> numSubjects;
		cout<<endl;
		double grades[100], credits[100];  // Arrays to hold grades and credits
		double totalCredits = 0;
		double weightedSum = 0;

		// Input grades and credits
		for (int i = 0; i < numSubjects; i++) {

			cout << "Enter the credit for the subject " << i + 1 << ": ";
			cin >> credits[i];
			cout<<endl;
			cout << "Enter the point of the subject " << i + 1 << ": ";
			cin >> grades[i];
			length = 60;  

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) { 
            cout << "--";
        } else {   
            cout << "";
        }
    }
    cout <<endl;
	
		
			// Calculate weighted sum and total credits
			weightedSum+=grades[i]*credits[i];		                                           
				totalCredits += credits[i];
		}

		// Calculate GPA
		double gpa = weightedSum / totalCredits;

		// Determine equivalent grade
		string grade;
		if (gpa > 5) {
			if (gpa >= 95) grade = "A+";
			else if (gpa >= 90) grade ="A";         
			else if (gpa >= 85) grade = "B+";
			else if (gpa >= 80) grade = "B";
			else if (gpa >= 75) grade = "C+";
			else if (gpa >= 70) grade = "C";
			else if (gpa >= 65) grade = "D+";
			else if (gpa >= 60) grade = "D";
			else grade = "F";
		} else {
			if (gpa > 4.75) grade = "A+";
			else if (gpa > 4.5) grade = "A";
			else if (gpa > 4.0) grade = "B+";
			else if (gpa > 3.5) grade = "B";
			else if (gpa > 3.0) grade = "C+";
			else if (gpa > 2.5) grade = "C";
			else if (gpa > 2.0) grade = "D+";
			else if (gpa > 0.0) grade = "D";
			else grade = "F";
		}

		
		cout << "Total Points: " << weightedSum << " . Total Credits: " << totalCredits << " .Total GPA: " << gpa << ".The grade = " << grade << endl;
          break;
	}



	case 2: {
		// CGPA Calculation
		int numSemesters;
		cout << "---------------- CGPA Calculating ----------------" << endl;
		cout<<endl;

		cout << "How many semester results do you want input? :";
		cin >> numSemesters;
		cout<<endl;


		float gpas[100];  // Array to hold GPAs of each semester
		float sumGPA = 0;

		// Input GPA for each semester
		for (int i = 0; i < numSemesters; i++) {
			cout<<endl;
			cout << "Enter Semester " << i + 1 << " Result (GPA): ";
			cin >> gpas[i];

			cout<<endl;

			// Sum GPA values
			sumGPA = sumGPA + gpas[i];
		}
		// Calculate CGPA
		float cgpa = sumGPA / numSemesters;


        // Determine equivalent grade based on the provided CGPA criteria
		string cgpaGrade;
		if (cgpa > 4.75)
			cgpaGrade = "A+";
		else if (cgpa > 4.5)
			cgpaGrade = "A";
		else if (cgpa > 4.0 && cgpa <= 4.5)
			cgpaGrade = "B+";
		else if (cgpa > 3.5 && cgpa <= 4.0)
			cgpaGrade = "B";
		else if (cgpa > 3.0 && cgpa <= 3.5)
			cgpaGrade = "C+";
		else if (cgpa > 2.5 && cgpa <= 3.0)
			cgpaGrade = "C";
		else if (cgpa > 2.0 && cgpa <= 2.5)
			cgpaGrade = "D+";
		else if (cgpa > 0.0 && cgpa <= 2.0)
			cgpaGrade = "D";
		else
			cgpaGrade = "F"; // F = 0.0
		cout << "******** Your CGPA is " <<  cgpa << " ***********The grade = " << cgpaGrade << endl;
		break;
	}

	case 3: {
		// Display Methods
		cout << "Methods:\n";
		cout << "1. GPA = Sum of (Credit * (Grade/100 * 5)) / Total of Credits\n";
		cout << "2. CGPA = Sum of gpa's / Number of Semesters\n";
		break;
	}

	case 4: {
		cout << "Exiting Application..." << endl;
		break;
	}

	default:
		cout << "Invalid choice. Please select either 1, 2, or 3.\n";
		break;
	}

	return 0;
} 
 