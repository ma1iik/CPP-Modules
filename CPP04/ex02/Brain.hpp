/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:15:17 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/30 18:15:32 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Brain
{
    public:
        Brain(void);
        ~Brain(void);
		Brain(const std::string& target_name);
        Brain(const Brain &cpy);

        Brain           &operator=(Brain const& eq);
        std::string     *get_ideas(void) const;
        
    protected:
        std::string  *_ideas;
};