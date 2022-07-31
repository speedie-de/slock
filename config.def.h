/* user and group to drop privileges to */
static char *user  = "anon";
static char *group = "video";
static int dropuser = 0; /* Whether or not to drop privileges to *user */
static int dropgroup = 0; /* Whether or not to drop privileges to *group */

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",       /* after initialization */
	[INPUT] = "#005577",    /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

static char * message = ""; /* No message by default */
static char * text_color = "#ffffff";
static char * font_name  = "6x13";

/* treat a cleared input like a wrong password (color) */
static int failonclear = 1;

/* Background image path, should be available to the user above */
static char* background_image = "/home/anon/.config/dwm-de/swal/CurrentWallpaper";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",           STRING,  &colorname[INIT] },
		{ "color4",           STRING,  &colorname[INPUT] },
		{ "color1",           STRING,  &colorname[FAILED] },
		{ "color3",           STRING,  &colorname[CAPS] },
		{ "color5",           STRING,  &text_color },
		{ "font_name",        STRING,  &font_name },
		{ "message",          STRING,  &message },
		{ "background_image", STRING,  &background_image },
		{ "dropuser",         INTEGER, &dropuser },
		{ "dropgroup",        INTEGER, &dropgroup },
		{ "failonclear",      INTEGER, &failonclear },
};
