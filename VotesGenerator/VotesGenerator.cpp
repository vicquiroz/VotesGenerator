#include "VotesGenerator.h"
using namespace std;
int sample_size = 450;
int rotation = 45;
int votes_quantity = 1;
int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		sample_size = stoi(argv[1]);
		rotation = stoi(argv[2]);
		votes_quantity = stoi(argv[3]);
	}
	for (size_t i = 0; i < votes_quantity; i++)
	{
		generate_normal_distribution(sample_size, rotation, i);
	}
}
