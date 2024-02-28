#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H
#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
#include <map>

void							read_file(char **av);
std::map<size_t, std::string>	split_data();
int								t_leap(int	year);
#endif