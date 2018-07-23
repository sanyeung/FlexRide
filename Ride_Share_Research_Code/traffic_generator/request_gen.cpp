#include <iostream>
#include <fstream>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	ifstream fin("edges.out");
	ofstream fout("../tsharesim/first_graph/newtaxi.dat");
	long time_start = 25200;
	long time_end = 25340;
	long vertex = 1;
	set<int> starts;
	set<int> ends;
	int first;
	fin>>first;
	int v1,v2;
	double length;

	srand(time(0));
	for(int k = 1; k < 500; k++)
	{
		fin>>v1;
		fin>>v2;
		fin>>length;
		v2 = rand() % 500 + 1;
		if(starts.find(v1) != starts.end() || ends.find(v2) != ends.end())
		{
			continue;
		}	
		else
		{
			fout<<25255<<" "<<v1<<" "<<v2<<" "<<endl;
			ends.insert(v2);
			starts.insert(v1);
		}
	}
	return 1;
}