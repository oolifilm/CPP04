/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:21:24 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 21:24:10 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];
    public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    virtual ~Brain();
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};

#endif