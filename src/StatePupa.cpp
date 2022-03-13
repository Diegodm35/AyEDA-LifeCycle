/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StatePupa
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#include "StatePupa.hpp"

StatePupa::StatePupa() : State() {}

StatePupa::~StatePupa() {}

char StatePupa::GetState() const { return 'P'; }

State* State::NextState() {}