#include <bits/stdc++.h> 
using namespace std;

int n(0);
struct Student{
	int serialno;
	string name;	
	int scholarship; 
}student[101]; 

void quickSortScholarshipDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = student[(low + high) / 2].scholarship;
	
	do{
		while(student[i].scholarship > pivot) i++;
		while(student[j].scholarship < pivot) j--;
		if(i <= j){
			swap(student[i], student[j]);	
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortScholarshipDesc(low, j);
	if(i < high)  quickSortScholarshipDesc(i, high);	
} 

void quickSortSerialnoAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = student[(low + high) / 2].serialno;
	
	do{
		while(student[i].serialno < pivot) i++;
		while(student[j].serialno > pivot) j--;
		if(i <= j){
			swap(student[i], student[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortSerialnoAsc(low, j);
	if(i < high)  quickSortSerialnoAsc(i, high);	
} 

int main(void){
	cin >> n;
	int _final_score(0), _class_score(0), _thesis(0);
	char _is_cadre, _is_from_west;
	int total_scholarship(0);
	
	for(int i = 1; i<= n; i++){
		student[i].serialno = i;
		cin >> student[i].name >> _final_score >> _class_score;
		cin >> _is_cadre >> _is_from_west >> _thesis;
		
		student[i].scholarship = 0;
		if(_final_score > 80 && _thesis >= 1) student[i].scholarship += 8000;
		if(_final_score > 85 && _class_score > 80) student[i].scholarship += 4000;
	    if(_final_score > 90)  student[i].scholarship += 2000;
	    if(_final_score > 85 && _is_from_west == 'Y')  student[i].scholarship += 1000;
	    if(_class_score > 80 && _is_cadre == 'Y') student[i].scholarship += 850;
	    
		total_scholarship += student[i].scholarship; 
	}
	quickSortScholarshipDesc(1, n);
	
	int j = 1;
	while(student[j + 1].scholarship == student[j].scholarship) j++;
	if(j > 1) quickSortSerialnoAsc(1, j);
	
	cout << student[1].name << endl;
	cout << student[1].scholarship << endl;
	cout << total_scholarship << endl;	
	
	return 0;
}
