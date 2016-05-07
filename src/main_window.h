/*
 * Copyright (c) 2014-2016 gnome-mpv
 *
 * This file is part of GNOME MPV.
 *
 * GNOME MPV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNOME MPV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNOME MPV.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtk/gtk.h>

#include "playlist.h"
#include "playlist_widget.h"
#include "control_box.h"
#include "video_area.h"

G_BEGIN_DECLS

#define MAIN_WINDOW_TYPE (main_window_get_type ())

#define	MAIN_WINDOW(obj) \
	(G_TYPE_CHECK_INSTANCE_CAST((obj), MAIN_WINDOW_TYPE, MainWindow))

#define	MAIN_WINDOW_CLASS(klass) \
	(G_TYPE_CHECK_CLASS_CAST((klass), MAIN_WINDOW_TYPE, MainWindowClass))

#define	IS_MAIN_WINDOW(obj) \
	(G_TYPE_CHECK_INSTANCE_TYPE((obj), MAIN_WINDOW_TYPE))

#define	IS_MAIN_WINDOW_CLASS(klass) \
	(G_TYPE_CHECK_CLASS_TYPE((klass), MAIN_WINDOW_TYPE))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
typedef struct _MainWindowPrivate MainWindowPrivate;
typedef struct _Application Application;

GtkWidget *main_window_new(Application *app, Playlist *playlist);
GType main_window_get_type(void);
PlaylistWidget *main_window_get_playlist(MainWindow *wnd);
ControlBox *main_window_get_control_box(MainWindow *wnd);
VideoArea *main_window_get_video_area(MainWindow *wnd);
void main_window_set_fullscreen(MainWindow *wnd, gboolean fullscreen);
gboolean main_window_get_fullscreen(MainWindow *wnd);
void main_window_toggle_fullscreen(MainWindow *wnd);
void main_window_reset(MainWindow *wnd);
void main_window_save_state(MainWindow *wnd);
void main_window_load_state(MainWindow *wnd);
void main_window_update_track_list(	MainWindow *wnd,
					const GSList *audio_list,
					const GSList *video_list,
					const GSList *sub_list );
void main_window_resize_video_area(	MainWindow *wnd,
					gint width,
					gint height );
void main_window_enable_csd(MainWindow *wnd);
gboolean main_window_get_csd_enabled(MainWindow *wnd);
void main_window_set_playlist_visible(MainWindow *wnd, gboolean visible);
gboolean main_window_get_playlist_visible(MainWindow *wnd);

G_END_DECLS

#endif
