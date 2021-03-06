/* Copyright (C) 2017 COD-Project

This file is part of CML.

CML is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

CML is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with CML. If not, see <http://www.gnu.org/licenses/>.     */


#include "../../../includes/cml.h"


// Constructor
Rational * Rational_new(double a, double b)
{
  Rational * self;
  self = malloc(4*sizeof(double));
  // Parent constructor
  self->super = Field_new(self->super);

  return self;
}

// Methods


// Destructor
void Rational_destruct(Rational * self)
{
  free(self);
}
