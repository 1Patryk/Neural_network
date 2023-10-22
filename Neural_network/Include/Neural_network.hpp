#ifndef NEURAL_NETWORK_HPP		// If is not declarate/added this header file
#define NEURAL_NETWORK_HPP		// declarating/adding him

#include <iostream>				// adding standard input/output library
#include <vector>				// STL - Standard template library
#include <fstream>				// adding posibility connect with .txt files
#include <chrono>				// time executive in program 
#include <ctime>				// ...
#include "pbPlots.hpp"			// library for drawn plots
#include "supportLib.hpp"		// ...

class Neural_network
{
private:

	double Bias;
	double Beta;
	int Amount_of_data;
	int Number_of_epochs;
	int Number_of_input;
	int Number_of_output;
	int Number_of_hidden_layers;
	int Number_of_weights;
	int Total_number_of_neurons;
	float Learning_rate_factor;
	std::vector<double>* Input_x1;
	std::vector<double>* Input_x2;
	std::vector<double>* Output_y1;
	std::vector<double>* Vector_of_weights;
	std::vector<double>* Vector_of_neuron_values;

public:

	Neural_network();																							// constructor

	void Read_data_MLP_x_x(std::vector<double>& Input_x1,														// reading input data from file
							std::vector<double>& Input_x2,														// ...
							std::vector<double>& Output_y1);													// ...

	void Min_max_unipolar_scaling(std::vector<double>& Vector);													// values from 0 to 1

	void Min_max_bipolar_scaling(std::vector<double>& Vector);													// values from 0 to -1

	void Reversal_min_max_unipolar_scaling();																	

	void Pseudo_random_numbers(std::vector<double>& Vector);													// for first weights wector

	void Calculating_the_network_MLP_X_X(std::vector<double>& Input_x1,											// forward propagation
											std::vector<double>& Input_x2,										// ...
											std::vector<double>& Output_y1,										// ...
											std::vector<double>& Vector_of_weights,								// ...
											std::vector<double>& Vector_of_neuron_values,						// ...
											double Bias);														// ...

	int Drawning_plot(std::vector<double>* Vector_of_neuron_values);											// creating file with plot

	double Unipolar_sigmoidal_function(double e);																// values from 0 to 1 

	void Display_results_for_MLP_x_x();																			// display results in main function
};





#endif							// end if function of NEURAL_NETWORK.HPP