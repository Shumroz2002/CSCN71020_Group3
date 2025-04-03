#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#ifdef __cplusplus
extern "C" {
#endif

	int validate_triangle(double a, double b, double c);
	int validate_rectangle(double length, double width);

	void get_triangle_sides(void);
	void get_rectangle_sides(void);

#ifdef __cplusplus
}
#endif

#endif
