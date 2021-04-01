/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/

#pragma once

#include <string>
#include <unordered_map>

namespace locale {

enum string {
    driver_aid_header,
    driver_aid_throttle,
    driver_aid_speedlimit,
    driver_aid_nextlimit,
    driver_aid_grade,
    driver_aid_brakes,
    driver_aid_pressures,
    driver_aid_alerter,
    driver_aid_shp,
    driver_aid_loadinginprogress,
    driver_aid_vehicleahead,

    driver_scenario_header,
    driver_scenario_assignment,
    driver_scenario_currenttask,
    driver_scenario_waitfororders,
    driver_scenario_prepareengine,
    driver_scenario_releaseengine,
    driver_scenario_changedirection,
    driver_scenario_connect,
    driver_scenario_disconnect,
    driver_scenario_allvehicles,
    driver_scenario_onevehicle,
    driver_scenario_fewvehicles,
    driver_scenario_somevehicles,
    driver_scenario_shunt,
    driver_scenario_looseshunt,
    driver_scenario_obeytrain,
    driver_scenario_bank,

    driver_hint_header,
    driver_hint_batteryon,
    driver_hint_batteryoff,
    driver_hint_radioon,
    driver_hint_radiooff,
    driver_hint_radiochannel,
    driver_hint_oilpumpon,
    driver_hint_oilpumpoff,
    driver_hint_fuelpumpon,
    driver_hint_fuelpumpoff,
    driver_hint_pantographairsourcesetmain,
    driver_hint_pantographairsourcesetauxiliary,
    driver_hint_pantographcompressoron,
    driver_hint_pantographcompressoroff,
    driver_hint_pantographsvalveon,
    driver_hint_pantographsvalveoff,
    driver_hint_frontpantographvalveon,
    driver_hint_frontpantographvalveoff,
    driver_hint_rearpantographvalveon,
    driver_hint_rearpantographvalveoff,
    driver_hint_converteron,
    driver_hint_converteroff,
    driver_hint_primaryconverteroverloadreset,
    driver_hint_maincircuitgroundreset,
    driver_hint_tractionnmotoroverloadreset,
    driver_hint_linebreakerclose,
    driver_hint_linebreakeropen,
    driver_hint_compressoron,
    driver_hint_compressoroff,
    driver_hint_frontmotorblowerson,
    driver_hint_frontmotorblowersoff,
    driver_hint_rearmotorblowerson,
    driver_hint_rearmotorblowersoff,
    driver_hint_springbrakeon,
    driver_hint_springbrakeoff,
    driver_hint_manualbrakon,
    driver_hint_manualbrakoff,
    driver_hint_mastercontrollersetidle,
    driver_hint_mastercontrollersetseriesmode,
    driver_hint_waterheateron,
    driver_hint_waterheateroff,
    driver_hint_waterheaterbreakeron,
    driver_hint_waterheaterbreakeroff,
    driver_hint_waterpumpon,
    driver_hint_waterpumpoff,
    driver_hint_waterpumpbreakeron,
    driver_hint_waterpumpbreakeroff,
    driver_hint_watercircuitslinkon,
    driver_hint_watercircuitslinkoff,
    driver_hint_waittemperaturetoolow,
    driver_hint_mastercontrollersetzerospeed,
    driver_hint_mastercontrollersetreverserunlock,
    driver_hint_trainbrakesetpipeunlock,
    driver_hint_trainbrakerelease,
    driver_hint_trainbrakeapply,
    driver_hint_directionforward,
    driver_hint_directionbackward,
    driver_hint_directionother,
    driver_hint_directionnone,
    driver_hint_waitpressuretoolow,
    driver_hint_waitpantographpressuretoolow,
    driver_hint_sandingon,
    driver_hint_sandingoff,
    driver_hint_consistdoorlockson,
    driver_hint_departuresignalon,
    driver_hint_departuresignaloff,
    driver_hint_doorrightopen,
    driver_hint_doorrightclose,
    driver_hint_doorleftopen,
    driver_hint_doorleftclose,
    driver_hint_doorrightpermiton,
    driver_hint_doorrightpermitoff,
    driver_hint_doorleftpermiton,
    driver_hint_doorleftpermitoff,
    driver_hint_hornon,
    driver_hint_hornoff,
    driver_hint_consistlightson,
    driver_hint_consistlightsoff,
    driver_hint_consistheatingon,
    driver_hint_consistheatingoff,
    driver_hint_securitysystemreset,
    driver_hint_couplingadapterattach,
    driver_hint_couplingadapterremove,
    driver_hint_secondcontrollersetzero,
    driver_hint_tractiveforcedecrease,
    driver_hint_tractiveforceincrease,
    driver_hint_brakingforcedecrease,
    driver_hint_brakingforceincrease,
    driver_hint_brakingforcesetzero,
    driver_hint_brakingforcelap,
    driver_hint_independentbrakeapply,
    driver_hint_independentbrakerelease,
    driver_hint_antislip,
    driver_hint_waitloadexchange,
    driver_hint_waitdeparturetime,
    driver_hint_headcodepc1,
    driver_hint_headcodepc2,
    driver_hint_headcodepc5,
    driver_hint_headcodetb1,
    driver_hint_lightsoff,
    driver_hint_releaseron,
    driver_hint_releaseroff,
    driver_hint_bufferscompress,

    driver_timetable_header,
    driver_timetable_name,
    driver_timetable_notimetable,
    driver_timetable_consistdata,

    driver_transcripts_header,

    driver_pause_header,
    driver_pause_resume,
    driver_pause_quit,

    debug_vehicle_nameloadstatuscouplers,
    debug_vehicle_owned,
    debug_vehicle_none,
    debug_vehicle_devicespower,
    debug_vehicle_radio,
    debug_vehicle_oilpressure,
    debug_vehicle_controllersenginerevolutions,
    debug_vehicle_shuntmode,
    debug_vehicle_temperatures,
    debug_vehicle_brakespressures,
    debug_vehicle_pantograph,
    debug_vehicle_forcesaccelerationvelocityposition,
    debug_vehicle_poweruse,
    debug_vehicle_powerwire,

    cab_mainctrl,
    cab_jointctrl,
    cab_scndctrl,
    cab_shuntmodepower,
    cab_tempomat,
    cab_tempomatoff,
    cab_speedinc,
    cab_speeddec,
    cab_speedctrlpowerinc,
    cab_speedctrlpowerdec,
    cab_speedbutton0,
    cab_speedbutton1,
    cab_speedbutton2,
    cab_speedbutton3,
    cab_speedbutton4,
    cab_speedbutton5,
    cab_speedbutton6,
    cab_speedbutton7,
    cab_speedbutton8,
    cab_speedbutton9,
    cab_distancecounter,
    cab_dirkey,
    cab_brakectrl,
    cab_localbrake,
    cab_manualbrake,
    cab_alarmchain,
    cab_brakeprofile_sw,
    cab_brakeprofileg_sw,
    cab_brakeprofiler_sw,
    cab_brakeopmode_sw,
    cab_maxcurrent_sw,
    cab_waterpump_sw,
    cab_waterpumpbreaker_sw,
    cab_waterheater_sw,
    cab_waterheaterbreaker_sw,
    cab_watercircuitslink_sw,
    cab_fuelpump_sw,
    cab_oilpump_sw,
    cab_motorblowersfront_sw,
    cab_motorblowersrear_sw,
    cab_motorblowersalloff_sw,
    cab_coolingfans_sw,
    cab_main_off_bt,
    cab_main_on_bt,
    cab_security_reset_bt,
    cab_releaser_bt,
    cab_springbrake_bt,
    cab_springbrakeon_bt,
    cab_springbrakeoff_bt,
    cab_universalbrake1_bt,
    cab_universalbrake2_bt,
    cab_universalbrake3_bt,
    cab_epbrake_bt,
    cab_sand_bt,
    cab_antislip_bt,
    cab_horn_bt,
    cab_hornlow_bt,
    cab_hornhigh_bt,
    cab_whistle_bt,
    cab_fuse_bt,
    cab_converterfuse_bt,
    cab_relayreset1,
    cab_relayreset2,
    cab_relayreset3,
    cab_stlinoff_bt,
    cab_doorleftpermit_sw,
    cab_doorrightpermit_sw,
    cab_doorpermitpreset_sw,
    cab_door_left_sw,
    cab_door_right_sw,
    cab_doorlefton_sw,
    cab_doorrighton_sw,
    cab_doorleftoff_sw,
    cab_doorrightoff_sw,
    cab_doorallon_sw,
    cab_dooralloff_sw,
    cab_doorstep_sw,
    cab_doormode_sw,
    cab_departure_signal_bt,
    cab_upperlight_sw,
    cab_leftlight_sw,
    cab_rightlight_sw,
    cab_dimheadlights_sw,
    cab_leftend_sw,
    cab_rightend_sw,
    cab_lights_sw,
    cab_rearupperlight_sw,
    cab_rearleftlight_sw,
    cab_rearrightlight_sw,
    cab_rearleftend_sw,
    cab_rearrightend_sw,
    cab_compressor_sw,
    cab_compressorlocal_sw,
    cab_converter_sw,
    cab_converterlocal_sw,
    cab_converteroff_sw,
    cab_main_sw,
    cab_radio_sw,
    cab_radiochannel_sw,
    cab_radiochannelprev_sw,
    cab_radiochannelnext_sw,
    cab_radiotest_sw,
    cab_radiostop_sw,
    cab_radiocall3_sw,
    cab_radiovolume_sw,
    cab_radiovolumeprev_sw,
    cab_radiovolumenext_sw,
    cab_pantfront_sw,
    cab_pantrear_sw,
    cab_pantfrontoff_sw,
    cab_pantrearoff_sw,
    cab_pantalloff_sw,
    cab_pantselected_sw,
    cab_pantselectedoff_sw,
    cab_pantselect_sw,
    cab_pantvalves_sw,
    cab_pantcompressor_sw,
    cab_pantcompressorvalve_sw,
    cab_trainheating_sw,
    cab_signalling_sw,
    cab_door_signalling_sw,
    cab_nextcurrent_sw,
    cab_instrumentlight_sw,
    cab_dashboardlight_sw,
    cab_timetablelight_sw,
    cab_cablight_sw,
    cab_cablightdim_sw,
    cab_compartmentlights_sw,
    cab_compartmentlightson_sw,
    cab_compartmentlightsoff_sw,
    cab_battery_sw,
    cab_batteryon_sw,
    cab_batteryoff_sw,
    cab_couplingdisconnect_sw,
    cab_universal0,
    cab_universal1,
    cab_universal2,
    cab_universal3,
    cab_universal4,
    cab_universal5,
    cab_universal6,
    cab_universal7,
    cab_universal8,
    cab_universal9,

    string_count
};

void
    init();
std::string
    label_cab_control( std::string const &Label );

extern std::vector<std::string> strings;

extern std::unordered_map<std::string, std::string> m_cabcontrols;

}

//---------------------------------------------------------------------------

