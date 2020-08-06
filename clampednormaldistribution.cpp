#include "clampednormaldistribution.h"

ClampedNormalDistribution::ClampedNormalDistribution(double fixed) {
	this->fixed = fixed;
	primed      = true;
}

ClampedNormalDistribution::ClampedNormalDistribution(double min, double max, double mean, double stddev) {
	setParam(min, max, mean, stddev);
}

void ClampedNormalDistribution::setParam(double min, double max, double mean, double stddev) {
	primed       = true;
	distribution            = std::normal_distribution<>{mean, stddev};
	this->min    = min;
	this->max    = max;
	this->mean   = mean;
	this->stddev = stddev;
}

double ClampedNormalDistribution::gen() const{
	if (!primed) {
		throw "Revenue Share not set";
	}
	if (fixed) {
		return fixed;
	}
	double rand = 0;
	for (uint i = 0; i < 1000; i++) {
		rand = distribution(generator);
		if (rand <= max && rand >= min) {
			return rand;
		}
	}
	//if too many try return 0
	return 0;
}