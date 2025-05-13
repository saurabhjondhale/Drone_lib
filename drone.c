#ifndef DRONE_H
#define DRONE_H

#ifdef __cplusplus
extern "C" {
#endif



void drone_init();
void drone_shutdown();

int drone_connect(const char *port);
void drone_send_command(const char *cmd);
char* drone_receive_data();

void drone_takeoff();
void drone_land();
void drone_move_forward(float distance);
void drone_rotate_yaw(float degrees);


float drone_get_altitude();
float drone_get_battery_level();

void drone_set_waypoints(float *lat, float *lon, int count);


#ifdef __cplusplus
}
#endif

#endif // DRONE_H