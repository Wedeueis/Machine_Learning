#include "../inc/data.hpp"

int main(){
  Data set("../../inc/data.csv");
  std::cout << "Data" << std::endl;
  if(!set.empty())
    for(int i=0; i< set.size(); i++){
      for(int j = 0; j<set.data[i].size; j++)
        std::cout << set.data[i].features[j] << " ";
      std::cout << set.data[i].label << std::endl;
    }
   set.mean();
   set.variance();
   set.std_dev();
   set.normalize();
   std::cout << std::endl;


   std::cout << "Normalized Data" << std::endl;
   for(int i=0; i< set.size(); i++){
      for(int j = 0; j<set.norm_data[i].size; j++)
      	std::cout << set.norm_data[i].features[j] << " ";
      std::cout << std::endl;
   }

   std::cout << "Mean" << std::endl;
   for(int j = 0; j<set.st.mean.size(); j++)
      	std::cout << set.st.mean[j] << " ";
    std::cout << std::endl;

   std::cout << "Variance" << std::endl;
   for(int j = 0; j<set.st.mean.size(); j++)
      	std::cout << set.st.variance[j] << " ";
   std::cout << std::endl;

   std::cout << "Standard Deviation" << std::endl;
   for(int j = 0; j<set.st.mean.size(); j++)
      	std::cout << set.st.std_dev[j] << " ";
   std::cout << std::endl;

   std::cout << "Sucess!" << std::endl;
}