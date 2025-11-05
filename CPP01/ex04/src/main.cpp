/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:42:43 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/24 15:55:18 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <fichier> <rechercher> <remplacer>" << std::endl;
		return 1;
	}

	std::ifstream input_file(av[1]);
	if (!input_file.is_open()) {
		std::cerr << "Erreur : impossible d'ouvrir le fichier source." << std::endl;
		return 1;
	}

	std::ofstream output_file("output.txt");
	if (!output_file.is_open()) {
		std::cerr << "Erreur : impossible de créer le fichier destination." << std::endl;
		return 1;
	}

	std::string to_find = av[2];
	std::string to_replace = av[3];
	std::string line;

	while (std::getline(input_file, line))
	{
		std::string result = "";
		std::size_t i = 0;

		while (i < line.length())
		{
			
			if (line.substr(i, to_find.length()) == to_find)
			{
				result += to_replace;
				i += to_find.length();
			}
			else
			{
				result += line[i];
				i++;
			}
		}

		output_file << result << std::endl;
	}

	input_file.close();
	output_file.close();

	std::cout << "Remplacement terminé. Voir le fichier output.txt" << std::endl;
	return 0;
}
