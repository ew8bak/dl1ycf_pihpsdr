/* Copyright (C)
* 2017 - John Melton, G0ORX/N6LYT
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/

#ifndef _FREEDV_WATERFALL_H
#define _FREEDV_WATERFALL_H

#define AUDIO_WATERFALL_SAMPLES 256

extern float *audio_samples;
extern int audio_samples_index;

extern void audio_waterfall_update();
extern GtkWidget* audio_waterfall_init(int width,int height);
extern void audio_waterfall_setup(int sample_rate,int cursor);

#endif

