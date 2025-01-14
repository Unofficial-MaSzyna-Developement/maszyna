/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/

#pragma once

#include "Classes.h"

class AirCoupler
{
private:
    TSubModel *ModelOn, *ModelOff, *ModelxOn;
    bool On;
    bool xOn;
    void Update();

public:
    AirCoupler();
    ~AirCoupler();
    
    
    /// <summary>
    /// Reset members.
    /// </summary>
    void Clear();
    
    /// <summary>
    /// Looks for submodels.
    /// </summary>
    /// <param name="asName"></param>
    /// <param name="Model"></param>
    void Init(std::string const &asName, TModel3d *Model);

    /// <summary>
    /// Loads info about coupler.
    /// </summary>
    /// <param name="Parser"></param>
    /// <param name="Model"></param>
    void Load(cParser *Parser, TModel3d *Model);

    /// <summary>
    /// Returns status
    /// </summary>
    /// <returns></returns>
    int GetStatus();

    /// <summary>
    /// Turns on straight coupler.
    /// </summary>
    inline void TurnOn() 
    {
        On = true;
        xOn = false;
        Update();
    };

    /// <summary>
    /// Turns on disconnected coupler.
    /// </summary>
    inline void TurnOff()
    {
        On = false;
        xOn = false;
        Update();
    };

    /// <summary>
    /// Turns on slanted coupler.
    /// </summary>
    inline void TurnxOn()
    {
        On = false;
        xOn = true;
        Update();
    };

    // if the xOn model is missing, activate plain On instead
    inline void TurnxOnWithOnAsFallback()
    {
        if (ModelxOn != nullptr) {
            On = false;
            xOn = true;
            Update();
        }
        else {
            TurnOn();
        }
    };
    // if the xOn model is missing, activate plain Off instead
    inline void TurnxOnWithOffAsFallback()
    {
        if (ModelxOn != nullptr) {
            On = false;
            xOn = true;
            Update();
        }
        else {
            TurnOff();
        }
    };
    inline bool Active() const
    {
        return ( ( ModelOn != nullptr ) || ( ModelxOn != nullptr ) );
    };
};

