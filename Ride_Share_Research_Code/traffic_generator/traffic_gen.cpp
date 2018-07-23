#include <iostream>
#include <fstream>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	ifstream fin("edges.out");
	ofstream fout("../tsharesim/first_graph/traffic.txt");
	long time_start = 25200;
	long time_end = 25340;
	long vertex = 1;
	set<int> starts;
	set<int> ends;
	int first;
	fin>>first;
	int v1,v2;
	double length;
	cout<<first<<endl;
	int multiplier  = rand() % 2 + 1;
	for(int k = 1; k < 375; k++)
	{
		fin>>v1;
		fin>>v2;
		fin>>length;
		if(starts.find(v1) != starts.end() || ends.find(v2) != ends.end())
		{
			continue;
		}		
		else
		{
			fout<<25335<<" "<<v1<<" "<<v2<<" "<<multiplier * length<<endl;
			// cout<<25335<<" "<<v1<<" "<<v2<<" "<<length<<endl;
			ends.insert(v2);
			starts.insert(v1);
		}
	}
	return 1;
}