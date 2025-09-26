/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:12:25 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 22:15:33 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

// AAnimal a;
// AAnimal* ptr = new AAnimal();
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();

delete j;
delete i;

const int size = 4;
AAnimal* animals[size];

for(int k = 0; k < size / 2; k++)
    animals[k] = new Dog();
for(int k = size / 2; k < size; k++)
    animals[k] = new Cat();
for(int k = 0; k < size; k++)
    animals[k]->makeSound();
for (int k = 0; k < size; k++)
    delete animals[k];

Dog d1;
d1.getBrain()->setIdea(0, "Eat a bone");
Dog d2 = d1;
d2.getBrain()->setIdea(0, "Chase the cat");

std::cout << "Dog1 idea: " << d1.getBrain()->getIdea(0) << std::endl;
std::cout << "Dog2 idea: " << d2.getBrain()->getIdea(0) << std::endl;
return 0;
}