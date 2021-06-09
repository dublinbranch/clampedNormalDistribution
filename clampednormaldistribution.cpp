#include "clampednormaldistribution.h"
#include <chrono>
ClampedNormalDistribution::ClampedNormalDistribution(double fixed) {
	setFixed(fixed);
}

ClampedNormalDistribution::ClampedNormalDistribution(double _min, double _max, double _mean, double stddev) {
	setParam(_min, _max, _mean, stddev);
}

void ClampedNormalDistribution::setFixed(double _fixed) {
	this->fixed = _fixed;
	primed      = true;
}

void ClampedNormalDistribution::setParam(double _min, double _max, double _mean, double _stddev) {
	primed        = true;
	distribution  = std::normal_distribution<>{_mean, _stddev};
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	generator.seed(seed);
	this->min    = _min;
	this->max    = _max;
	this->mean   = _mean;
	this->stddev = _stddev;
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
