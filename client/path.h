#ifndef PATH_H
#define PATH_H

extern int16_t path_errno;
extern int16_t target_dir;
extern int8_t has_path;

uint8_t read_path(uint16_t *length_p, coord_t *path_p[]);
void draw_path(uint16_t length, coord_t path[]);
coord_t * get_prev_destination();
uint8_t is_coord_visible(coord_t point);

#endif
