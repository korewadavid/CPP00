/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/04 19:04:43 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

void    Contact::add_new(Contact *contact)
{
    contact->first_name = fill_info("First Name:");
    contact->last_name = fill_info("Last Name:");
    contact->nickname = fill_info("Nickname:");
    contact->phone_number = getNumber();
    contact->darkestSecret = fill_info("Darkest Secret:");
}