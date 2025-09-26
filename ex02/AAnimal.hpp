/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:09:41 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 22:11:50 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal& operator=(const AAnimal &other);
        virtual ~AAnimal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif