#pragma once
#include <random>
class ClampedNormalDistribution {
      public:
	ClampedNormalDistribution() = default;
	ClampedNormalDistribution(double fixed);
	ClampedNormalDistribution(double min, double max, double mean, double stddev);
	void setFixed(double fixed);
	void setParam(double min, double max, double mean, double stddev);
	
	//we can not copy a random number generator. so just recreate
	///It should have just been easier to move around a shared_ptr...
	///but what about using the rng in multithreading ?
	void operator=(const ClampedNormalDistribution& from);
	ClampedNormalDistribution(const ClampedNormalDistribution& from);
	
	double gen() const;

      private:
	bool   primed = false;
	double fixed  = 0;
	double min = 0, max = 0, mean = 0, stddev = 0;
	//so this class can be passed around without big problem as const
	mutable std::mt19937               generator;
	mutable std::normal_distribution<> distribution;
};
