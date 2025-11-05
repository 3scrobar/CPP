/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:06:14 by tle-saut          #+#    #+#             */
/*   Updated: 2025/11/04 14:47:29 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <algorithm>  // find, distance, count
#include <numeric>    // accumulate
#include "../include/MutanStack.hpp"

// ========== Couleurs ==========
#define C_RESET   "\033[0m"
#define C_SEC     "\033[1;36m"   // cyan bold
#define C_OK      "\033[1;32m"   // vert
#define C_INFO    "\033[1;34m"   // bleu
#define C_WARN    "\033[1;33m"   // jaune
#define C_ERR     "\033[1;31m"   // rouge

// Petit helper d'affichage via itérateurs
template <typename It>
void print_range(const char* label, It first, It last) {
	std::cout << C_INFO << label << C_RESET << " [";
	for (It it = first; it != last; ++it) {
		if (it != first) std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "]\n";
}

int main() {
	std::cout << C_SEC << "===== TEST 1: Basique push/top/pop/size =====" << C_RESET << "\n";
	MutantStack<int> mstack;          // conteneur sous-jacent = std::deque<int>
	std::cout << "empty? " << (mstack.empty() ? "yes" : "no") << "\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << " (attendu 17)\n";
	mstack.pop();
	std::cout << "size = " << mstack.size() << " (attendu 1)\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "size = " << mstack.size() << "\n";

	std::cout << C_SEC << "\n===== TEST 2: Itérateurs begin/end =====" << C_RESET << "\n";
	print_range("mstack begin->end", mstack.begin(), mstack.end());

	std::cout << C_SEC << "\n===== TEST 3: Itérateurs inverses rbegin/rend =====" << C_RESET << "\n";
	print_range("mstack rbegin->rend", mstack.rbegin(), mstack.rend());

	std::cout << C_SEC << "\n===== TEST 4: ++it / --it et parcours =====" << C_RESET << "\n";
	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it; --it; // comme dans le sujet
		std::cout << "parcours :\n";
		while (it != ite) {
			std::cout << *it << "\n";
			++it;
		}
	}

	std::cout << C_SEC << "\n===== TEST 5: Modification via iterator non-const (+1) =====" << C_RESET << "\n";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		*it = *it + 1;
	print_range("apres +1", mstack.begin(), mstack.end());
	std::cout << "top = " << mstack.top() << "\n";

	std::cout << C_SEC << "\n===== TEST 6: Algorithmes STL =====" << C_RESET << "\n";
	{
		int target = 738; // 737 a été +1
		MutantStack<int>::iterator it = std::find(mstack.begin(), mstack.end(), target);
		if (it != mstack.end()) {
			std::cout << C_OK << "find(" << target << ") -> trouve"
					<< C_RESET << " (index " << std::distance(mstack.begin(), it) << ")\n";
		} else {
			std::cout << C_WARN << "find(" << target << ") -> non trouve" << C_RESET << "\n";
		}
		int c6 = std::count(mstack.begin(), mstack.end(), 6);
		std::cout << "count(6) = " << c6 << "\n";
		int sum = std::accumulate(mstack.begin(), mstack.end(), 0);
		std::cout << "accumulate = " << sum << "\n";
	}

	std::cout << C_SEC << "\n===== TEST 7: Const-correctness =====" << C_RESET << "\n";
	{
		const MutantStack<int> cstack = mstack; // copie const
		print_range("const begin->end", cstack.begin(), cstack.end());
		print_range("const rbegin->rend", cstack.rbegin(), cstack.rend());
		std::cout << "size(const) = " << cstack.size() << ", top(const) = " << cstack.top() << "\n";
	}

	std::cout << C_SEC << "\n===== TEST 8: Copie et assignation =====" << C_RESET << "\n";
	{
		MutantStack<int> a;
		a.push(1); a.push(2); a.push(3);
		MutantStack<int> b(a);      // copy ctor
		MutantStack<int> c; c = a;  // operator=
		print_range("a", a.begin(), a.end());
		print_range("b (copy)", b.begin(), b.end());
		print_range("c (assign)", c.begin(), c.end());
	}

	std::cout << C_SEC << "\n===== TEST 9: Compat std::stack<int> s(mstack) =====" << C_RESET << "\n";
	{
		std::stack<int> s(mstack);
		std::cout << C_OK << "Copie OK dans std::stack<int>" << C_RESET
				<< " | top(s) = " << s.top() << "\n";
	}

	std::cout << C_SEC << "\n===== TEST 10: Stress (1000 elements) =====" << C_RESET << "\n";
	{
		MutantStack<int> big;
		for (int i = 0; i < 1000; ++i) big.push(i);
		std::cout << "size = " << big.size() << " (attendu 1000)\n";
		int sum = std::accumulate(big.begin(), big.end(), 0);
		std::cout << "accumulate(0..999) = " << sum << " (attendu 499500)\n";
		std::cout << "top = " << big.top() << " (attendu 999)\n";
	}

	std::cout << C_OK << "\n==== TESTS DU SUJET====\n" << C_RESET;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);


	
	std::cout << C_OK << "\n==== FIN DES TESTS ====\n" << C_RESET;
	return 0;
}


