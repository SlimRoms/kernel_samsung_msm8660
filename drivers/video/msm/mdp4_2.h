/* Copyright (c) 2009-2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifdef CONFIG_FB_MSM_MIPI_DSI
int mdp4_dsi_video_splash_done(void);
#else
static int mdp4_dsi_video_splash_done(void)
{
	return 0;
}
#endif
