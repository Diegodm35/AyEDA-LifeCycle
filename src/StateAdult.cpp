/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StateAdult
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#include "StateAdult.hpp"

StateAdult::StateAdult() : State() {}

StateAdult::~StateAdult() {}

char StateAdult::GetState() const { return 'A'; }

State* State::NextState() {}