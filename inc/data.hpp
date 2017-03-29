#include <vector>
#include <string>
#include <fstream>
#include "../inc/statistics.hpp"

class Data{
public:
	Data();
	Data(std::string filename);
	~Data();
	void init(std::string filename);
	void read(std::string filename);
	void add(Sample newsample);
	void remove(int id);
	int size();
	bool empty();
	std::vector<double> mean();
	std::vector<double> variance();
	std::vector<double> std_dev();
	void normalize();
	std::vector<Sample> data;
	std::vector<Sample> norm_data;
//private:
	int setSize;
	Statistics st;
};