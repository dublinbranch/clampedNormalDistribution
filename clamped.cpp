#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

class ClampedNormal {
      public:
	ClampedNormal(double min, double max, double mean, double stddev) {
		d         = std::normal_distribution<>{mean, stddev};
		this->min = min;
		this->max = max;
	}
        double gen();
	std::random_device         rd{};
	std::mt19937               generator{rd()};
	std::normal_distribution<> d;
	double                     min, max;
};

double ClampedNormal::gen() {
	double rand = 0;
	for(uint i = 0; i < 1000; i++) {
		rand = d(rd);
		if (rand <= max && rand >= min) {
			return rand;
		}
	}
	//if too many try return 0
	return 0;
}

int main() {

	std::map<double, int> hist{};
	for (int n = 0; n < 10000; ++n) {
		ClampedNormal seq(0.4, 0.5, 0.45, 0.025);
		int           nDummy = (int)(seq.gen() * 100.0);
		auto          v      = ((double)nDummy) / 100.0;
		++hist[v];
	}
	for (auto p : hist) {
		std::cout << std::setw(2)
		          << p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}
