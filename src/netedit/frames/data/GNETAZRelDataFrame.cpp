/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2020 German Aerospace Center (DLR) and others.
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// https://www.eclipse.org/legal/epl-2.0/
// This Source Code may also be made available under the following Secondary
// Licenses when the conditions for such availability set forth in the Eclipse
// Public License 2.0 are satisfied: GNU General Public License, version 2
// or later which is available at
// https://www.gnu.org/licenses/old-licenses/gpl-2.0-standalone.html
// SPDX-License-Identifier: EPL-2.0 OR GPL-2.0-or-later
/****************************************************************************/
/// @file    GNETAZRelDataFrame.cpp
/// @author  Pablo Alvarez Lopez
/// @date    May 2020
///
// The Widget for add TAZRelationData elements
/****************************************************************************/
#include <config.h>

#include <netedit/elements/data/GNEDataHandler.h>
#include <netedit/GNEViewNet.h>

#include "GNETAZRelDataFrame.h"


// ===========================================================================
// method definitions
// ===========================================================================

GNETAZRelDataFrame::GNETAZRelDataFrame(FXHorizontalFrame* horizontalFrameParent, GNEViewNet* viewNet) :
    GNEGenericDataFrame(horizontalFrameParent, viewNet, SUMO_TAG_TAZREL, false) {
}


GNETAZRelDataFrame::~GNETAZRelDataFrame() {}


bool
GNETAZRelDataFrame::addTAZRelationData(const GNEViewNetHelper::ObjectsUnderCursor& objectsUnderCursor) {
/*
    // first check if we clicked over an TAZ
    if (objectsUnderCursor.getTAZFront() && myDataSetSelector->getDataSet() && myIntervalSelector->getDataInterval()) {
        return myTAZPathCreator->addPathTAZ(objectsUnderCursor.getTAZFront());
    } else {
        // invalid parent parameters
        return false;
    }
*/
    return false;
}

/****************************************************************************/
