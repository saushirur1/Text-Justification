#include <iostream>
#include <vector>
class greedy_justify
{
private:
  std::vector<std::string> v;
  std::vector<int> l;
  std::vector<int> result;
public:
  greedy_justify(std::string temp1);
  void helper(std::string filename);
  void justify(int justify_length);
  void print_justify();
};
class dynamic_justify
{
  std::vector<std::string> v;
  std::vector<int> l;
  std::vector<int> result;
public:
  dynamic_justify(std::string text);
  void dy_justify(int length);
  int badness(int index1,int index2);
};
