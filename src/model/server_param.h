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

#ifndef SERVER_PARAM_H
#define SERVER_PARAM_H

#include <string>

struct t_server_param {
	double audio_cut_dist;
	bool auto_mode;
	double back_dash_rate;
	bool back_passes;
	double ball_accel_max;
	double ball_decay;
	double ball_rand;
	double ball_size;
	double ball_speed_max;
	double ball_stuck_area;
	double ball_weight;
	int catch_ban_cycle;
	double catch_probability;
	double catchable_area_l;
	double catchable_area_w;
	double ckick_margin;
	int clang_advice_win;
	int clang_del_win;
	int clang_define_win;
	int clang_info_win;
	int clang_mess_delay;
	int clang_mess_per_cycle;
	int clang_meta_win;
	int clang_rule_win;
	int clang_win_size;
	bool coach;
	int coach_port;
	bool coach_w_referee;
	int connect_wait;
	double control_radius;
	double dash_angle_step;
	double dash_power_rate;
	int drop_ball_time;
	double effort_dec;
	double effort_dec_thr;
	double effort_inc;
	double effort_inc_thr;
	double effort_init;
	double effort_min;
	int extra_half_time;
	double extra_stamina;
	bool forbid_kick_off_offside;
	int foul_cycles;
	double foul_detect_probability;
	double foul_exponent;
	bool free_kick_faults;
	unsigned int freeform_send_period;
	unsigned int freeform_wait_period;
	int fullstate_l;
	int fullstate_r;
	int game_log_compression;
	int game_log_dated;
	std::string game_log_dir;
	bool game_log_fixed;
	std::string game_log_fixed_name;
	int game_log_version;
	bool game_logging;
	int game_over_wait;
	double goal_width;
	int goalie_max_moves;
	bool golden_goal;
	int half_time;
	unsigned int hear_decay;
	unsigned int hear_inc;
	unsigned int hear_max;
	double inertia_moment;
	bool keepaway;
	double keepaway_length;
	bool keepaway_log_dated;
	std::string keepaway_log_dir;
	bool keepaway_log_fixed;
	std::string keepaway_log_fixed_name;
	bool keepaway_logging;
	int keepaway_start;
	double keepaway_width;
	int kick_off_wait;
	double kick_power_rate;
	double kick_rand;
	double kick_rand_factor_l;
	double kick_rand_factor_r;
	double kickable_margin;
	std::string landmark_file;
	std::string log_date_format;
	int log_times;
	double max_back_tackle_power;
	double max_dash_angle;
	double max_dash_power;
	int max_goal_kicks;
	double max_tackle_power;
	double maxmoment;
	double maxneckang;
	double maxneckmoment;
	double maxpower;
	double min_dash_angle;
	double min_dash_power;
	double minmoment;
	double minneckang;
	double minneckmoment;
	double minpower;
	int nr_extra_halfs;
	int nr_normal_halfs;
	double offside_active_area_size;
	double offside_kick_margin;
	int olcoach_port;
	bool old_coach_hear;
	bool pen_allow_mult_kicks;
	int pen_before_setup_wait;
	bool pen_coach_moves_players;
	double pen_dist_x;
	int pen_max_extra_kicks;
	int pen_max_goalie_dist_x;
	int pen_nr_kicks;
	bool pen_random_winner;
	int pen_ready_wait;
	int pen_setup_wait;
	int pen_taken_wait;
	bool penalty_shoot_outs;
	double player_accel_max;
	double player_decay;
	double player_rand;
	double player_size;
	double player_speed_max;
	double player_speed_max_min;
	double player_weight;
	int point_to_ban;
	int point_to_duration;
	int port;
	double prand_factor_l;
	double prand_factor_r;
	bool profile;
	bool proper_goal_kicks;
	double quantize_step;
	double quantize_step_l; //?
	bool record_messages;
	double recover_dec;
	double recover_dec_thr;
	double recover_init;
	double recover_min;
	int recv_step;
	double red_card_probability;
	int say_coach_cnt_max;
	int say_coach_msg_size;
	int say_msg_size;
	bool send_comms;
	int send_step;
	int send_vi_step;
	int sense_body_step;
	double side_dash_rate;
	int simulator_step;
	int slow_down_factor;
	double slowness_on_top_for_left_team;
	double slowness_on_top_for_right_team;
	double stamina_capacity;
	double stamina_inc_max;
	double stamina_max;
	int start_goal_l;
	int start_goal_r;
	double stopped_ball_vel;
	unsigned int synch_micro_sleep;
	bool synch_mode;
	int synch_offset;
	int synch_see_offset;
	double tackle_back_dist;
	unsigned int tackle_cycles;
	double tackle_dist;
	double tackle_exponent;
	double tackle_power_rate;
	double tackle_rand_factor;
	double tackle_width;
	bool team_actuator_noise;
	std::string team_l_start;
	std::string team_r_start;
	int text_log_compression;
	int text_log_dated;
	std::string text_log_dir;
	int text_log_fixed;
	std::string text_log_fixed_name;
	bool text_logging;
	bool use_offside;
	bool verbose;
	double visible_angle;
	double visible_distance;
	double wind_ang;
	double wind_dir;
	double wind_force;
	bool wind_none;
	double wind_rand;
	bool wind_random;
};

#endif // SERVER_PARAM_H
