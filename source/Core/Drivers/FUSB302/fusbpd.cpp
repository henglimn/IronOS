/*
 * fusbpd.cpp
 *
 *  Created on: 13 Jun 2020
 *      Author: Ralim
 */
#include "configuration.h"
#ifdef POW_PD
#include "BSP.h"
#include "I2CBB.hpp"
#include "fusb302b.h"
#include "int_n.h"
#include "policy_engine.h"

#include <fusbpd.h>
#include <pd.h>

void fusb302_start_processing() {
  /* Initialize the FUSB302B */
  if (fusb_setup()) {
    PolicyEngine::init();
    InterruptHandler::init();
  }
}
#endif
