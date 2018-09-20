/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 09:07:48 by mmthombe          #+#    #+#             */
/*   Updated: 2018/06/10 09:07:53 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
#include "GameEntity.hpp"


class Enemy: public GameEntity {

public:
    Enemy(void);
    Enemy(int, int);
    Enemy(Enemy const & src);
    ~Enemy(void);
    Enemy(WINDOW * win, int y, int x, char c);

    void     update();
    void     getEnemy();

    //void update();

private:
    int    randomX;
    int     randomY;

};


#endif