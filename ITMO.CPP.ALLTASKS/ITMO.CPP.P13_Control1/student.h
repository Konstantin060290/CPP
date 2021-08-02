#pragma once
#include "human.h"
#include <string>
#include <vector>
#include <iostream>
class student : public human {
public:
	void get_data()
	{
		human::get_data();
		std::cout << "Enter number of scores: ";
		std::cin >> N;
		int val;
		std::cout << "Enter scores: " << std::endl;
		for (int i = 0; i < N; i++) {
			std::cin >> val;
			scores.push_back(val);
		}
		av_score = get_average_score();
	}
	void put_data() {
		human::put_data();
		std::cout << "Average score: " << av_score << std::endl;
	}
	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	std::vector<int> scores;
	int N;
	float av_score;
};