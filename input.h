// input.h file contains header files and class declaration.
#include <iostream>
#include <sstream>
#include <iterator>
#include <climits>
#include <deque>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include "files.h"
using namespace std;

const int min_size = 30;
const int max_size = 200;

class input // For getting room and roll no details from file
{
protected:

	// Room variables
	string room_no[min_size]; 
	int rows[min_size], cols[min_size], t_rooms;

	// Roll Number variables
	int t_branches, roll_no[min_size][max_size];
	int roll_size[min_size], rno[max_size];
	string branch_name[min_size], rollno[max_size], subcode[max_size], a;
	//char input_file[20];
	
	// File variable
	ifstream infile;	// Read contents of file
	ofstream outfile;	// Write into file
	fstream file;
	char input_file[25];
	
	int i,j,k;
	
public:
	// Getting Details about room and branch.
	input();
	void room_details();
	void rollno_details();
	void input_in_details();
	void input_out_file();
	void expand(string);
	template<typename OutIter>
	bool parse_number_list_with_ranges(istream& is, OutIter out);
	void roll_no_processing();
	void add_seperator(string &rno);
	void remove_zero();
};
