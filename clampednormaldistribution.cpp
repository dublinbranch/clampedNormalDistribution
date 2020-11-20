#include "clampednormaldistribution.h"
#include <chrono>
ClampedNormalDistribution::ClampedNormalDistribution(double fixed) {
	setFixed(fixed);
}

ClampedNormalDistribution::ClampedNormalDistribution(double min, double max, double mean, double stddev) {
	setParam(min, max, mean, stddev);
}

void ClampedNormalDistribution::setFixed(double fixed) {
	this->fixed = fixed;
	primed      = true;
}

void ClampedNormalDistribution::setParam(double min, double max, double mean, double stddev) {
	primed        = true;
	distribution  = std::normal_distribution<>{mean, stddev};
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	generator.seed(seed);
	this->min    = min;
	this->max    = max;
	this->mean   = mean;
	this->stddev = stddev;
}

void ClampedNormalDistribution::operator=(const ClampedNormalDistribution& from) {
	if (from.fixed) {
		setFixed(from.fixed);
		return;
	}
	this->setParam(from.min, from.max, from.mean, from.stddev);
}

ClampedNormalDistribution::ClampedNormalDistribution(const ClampedNormalDistribution& from) {
	*this = from;
	//this->setParam(from.min, from.max, from.mean, from.stddev);
}

double ClampedNormalDistribution::gen() const {
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
