#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector
#include "ft_pair.hpp"
#include "ft_is_integral.hpp"
#include "ft_equal.hpp"

int main () {

  //******************************************is_integral test

  // std::cout << std::boolalpha;
  std::cout << "is_integral:" << std::endl;
  std::cout << "char: " << ft::is_integral<char>::value << std::endl;
  std::cout << "int: " << ft::is_integral<int>::value << std::endl;
  std::cout << "float: " << ft::is_integral<float>::value << std::endl;

  //******************************************Pair tests
  // ft::pair<int, int> p(1, 2);
  // p.first = 1;
  // p.second = 2;

  //std::cout << p.first << std::endl;
  //std::cout << p.second << std::endl;
  //make_pair, swap


  //*********************************************Iterator tests

  //*****************************************Vector tests

  // std::vector<int> my_vec;
  // std::vector<int>::iterator it;

  // my_vec.push_back(1);
  // my_vec.push_back(2);
  // my_vec.push_back(3);

  // // for (it = my_vec.begin(); it != my_vec.end(); ++it)
  // //   std::cout << *it << std::endl;

  // it = my_vec.begin();
  // std::cout << *it << std::endl;
  return 0;
}