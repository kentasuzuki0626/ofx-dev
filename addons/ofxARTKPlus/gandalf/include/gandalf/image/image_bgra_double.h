/**
 * File:          $RCSfile: image_bgra_double.h,v $
 * Module:        BGR colour double precision float images with alpha channel
 * Part of:       Gandalf Library
 *
 * Revision:      $Revision: 1.2 $
 * Last edited:   $Date: 2006/09/15 20:43:36 $
 * Author:        $Author: pm $
 * Copyright:     (c) 2000 Imagineer Software Limited
 */

/* This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _GAN_IMAGE_BGRA_DOUBLE_H
#define _GAN_IMAGE_BGRA_DOUBLE_H

#define GAN_PIXEL struct Gan_BGRAPixel_d
#define GAN_PIXEL_FORMAT BGR-colour alpha
#define GAN_PIXEL_TYPE double
#define GAN_IMTYPE d
#define GAN_IMAGE_FORM_GEN gan_image_form_gen_bgra_d
#define GAN_IMAGE_SET_GEN gan_image_set_gen_bgra_d
#define GAN_IMAGE_ALLOC gan_image_alloc_bgra_d
#define GAN_IMAGE_ALLOC_DATA gan_image_alloc_data_bgra_d
#define GAN_IMAGE_FORM gan_image_form_bgra_d
#define GAN_IMAGE_FORM_DATA gan_image_form_data_bgra_d
#define GAN_IMAGE_SET gan_image_set_bgra_d
#define GAN_IMAGE_SET_PIX gan_image_set_pix_bgra_d
#define GAN_IMAGE_GET_PIX gan_image_get_pix_bgra_d
#define GAN_IMAGE_GET_PIXPTR gan_image_get_pixptr_bgra_d
#define GAN_IMAGE_GET_PIXARR gan_image_get_pixarr_bgra_d
#define GAN_IMAGE_FILL_CONST gan_image_fill_const_bgra_d
#define GAN_IMAGE_GET_ACTIVE_SUBWINDOW gan_image_get_active_subwindow_bgra_d
#define GAN_IMAGE_MASK_WINDOW gan_image_mask_window_bgra_d
#define GAN_IMAGE_CLEAR_WINDOW gan_image_clear_window_bgra_d

#include <gandalf/image/image_colour_noc.h>

#ifndef GAN_GENERATE_DOCUMENTATION
#define gan_image_alloc_bgra_d(h,w)\
           gan_image_form_gen_bgra_d(NULL,h,w,(w)*sizeof(Gan_BGRAPixel_d),GAN_TRUE,NULL,0,NULL,0)
#define gan_image_form_bgra_d(img,h,w)\
           gan_image_form_gen_bgra_d(img,h,w,(w)*sizeof(Gan_BGRAPixel_d),GAN_TRUE,NULL,0,NULL,0)
#define gan_image_alloc_data_bgra_d(h,w,s,pd,pds,rd,rds)\
           gan_image_form_gen_bgra_d(NULL,h,w,s,GAN_FALSE,pd,pds,rd,rds)
#define gan_image_form_data_bgra_d(img,h,w,s,pd,pds,rd,rds)\
           gan_image_form_gen_bgra_d(img,h,w,s,GAN_FALSE,pd,pds,rd,rds)
#define gan_image_set_bgra_d(img,h,w)\
           gan_image_set_gen_bgra_d(img,h,w,(w)*sizeof(Gan_BGRAPixel_d),GAN_TRUE)
#define gan_assert_image_bgra_d(img)\
        (assert((img)->format == GAN_BGR_COLOUR_ALPHA_IMAGE &&\
                (img)->type == GAN_DOUBLE))
#ifdef NDEBUG
#define gan_image_set_pix_bgra_d(img,row,col,val)\
       ((img)->row_data.bgra.d[row][col]=*(val),GAN_TRUE)
#define gan_image_get_pix_bgra_d(img,row,col) \
       ((img)->row_data.bgra.d[row][col])
#define gan_image_get_pixptr_bgra_d(img,row,col) (&(img)->row_data.bgra.d[row][col])
#define gan_image_get_pixarr_bgra_d(img) ((img)->row_data.bgra.d)
#else
#define gan_image_set_pix_bgra_d(img,row,col,val)\
       (gan_assert_image_bgra_d(img), (img)->set_pix.bgra.d(img,row,col,val))
#define gan_image_get_pix_bgra_d(img,row,col)\
       (gan_assert_image_bgra_d(img), (img)->get_pix.bgra.d(img,row,col))
#endif
#define gan_image_fill_const_bgra_d(img,val)\
       (gan_assert_image_bgra_d(img),\
        (img)->fill_const.bgra.d(img,val))
#endif /* #ifndef GAN_GENERATE_DOCUMENTATION */

#endif /* #ifndef _GAN_IMAGE_BGRA_DOUBLE_H */
