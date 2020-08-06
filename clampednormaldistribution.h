#pragma once
#include <random>
class ClampedNormalDistribution {
      public:
	ClampedNormalDistribution() = default;
	ClampedNormalDistribution(double fixed);
	ClampedNormalDistribution(double min, double max, double mean, double stddev);
	void setParam(double min, double max, double mean, double stddev);
	//we can not copy a random number generator. so just recreate
	void operator=(const ClampedNormalDistribution& from) {
		this->setParam(from.min, from.max, from.mean, from.stddev);
	}
	ClampedNormalDistribution(const ClampedNormalDistribution& from) {
		this->setParam(from.min, from.max, from.mean, from.stddev);
	}
	double gen() const;

      private:
	bool   primed = false;
	double fixed  = 0;
	double min = 0, max = 0, mean = 0, stddev = 0;
	//so this class can be passed around without big problem as const
	mutable std::mt19937               generator;
	mutable std::normal_distribution<> distribution;
};
