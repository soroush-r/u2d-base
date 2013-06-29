/*
 libU2D, Robocup 2D Soccer Server Simulation base of U2D Team.

 Copyright (c) 2011, 2012, 2013 Soroush Rabiei <soroush-r@users.sf.net>

 U2D is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 See the file COPYING included with this distribution for more
 information.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "server_param.h"

using namespace std;

//double server_param::audio_cut_dist;
//bool server_param::auto_mode;
//double server_param::back_dash_rate;
//int server_param::back_passes;
//double server_param::ball_accel_max;
//double server_param::ball_decay;
//double server_param::ball_rand;
//double server_param::ball_size;
//double server_param::ball_speed_max;
//double server_param::ball_stuck_area;
//double server_param::ball_weight;
//double server_param::catch_ban_cycle;
//double server_param::catch_probability;
//double server_param::catchable_area_l;
//double server_param::catchable_area_w;
//double server_param::ckick_margin;
//int server_param::clang_advice_win;//
//int server_param::clang_del_win; //
//int server_param::clang_define_win; //
//int server_param::clang_info_win;//
//int server_param::clang_mess_delay;//
//int server_param::clang_mess_per_cycle;
//int server_param::clang_meta_win;
//int server_param::clang_rule_win;
//int server_param::clang_win_size;
//bool server_param::coach;
//int server_param::coach_port;
//bool server_param::coach_w_referee;
//int server_param::connect_wait;
//int server_param::control_radius;
//int server_param::dash_angle_step;
//double server_param::dash_power_rate;
//int server_param::drop_ball_time;
//int server_param::effort_dec;
//int server_param::effort_dec_thr;
//int server_param::effort_inc;
//int server_param::effort_inc_thr;
//int server_param::effort_init;
//double server_param::effort_min;
//int server_param::extra_half_time;
//double server_param::extra_stamina;
//int server_param::forbid_kick_off_offside;
//int server_param::foul_cycles;
//double server_param::foul_detect_probability;
//int server_param::foul_exponent;
//int server_param::free_kick_faults;
//int server_param::freeform_send_period;
//int server_param::freeform_wait_period;
//int server_param::fullstate_l;
//int server_param::fullstate_r;
//bool server_param::game_log_compression;
//bool server_param::game_log_dated;
//string server_param::game_log_dir;
//bool server_param::game_log_fixed;
//string server_param::game_log_fixed_name;
//int server_param::game_log_version;
//int server_param::game_over_wait;
//double server_param::goal_width;
//int server_param::goalie_max_moves;
//bool server_param::golden_goal;
//int server_param::half_time;
//int server_param::hear_decay;
//int server_param::hear_inc;
//int server_param::hear_max;
//int server_param::inertia_moment;
