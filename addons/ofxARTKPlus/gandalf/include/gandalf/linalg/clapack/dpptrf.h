/**************************************************************************
*
* File:          $RCSfile: dpptrf.h,v $
* Module:        CLAPACK function
* Part of:       Gandalf Library
*
* Revision:      $Revision: 1.5 $
* Last edited:   $Date: 2005/02/25 09:30:24 $
* Author:        $Author: pm $
* Copyright:     Modifications (c) 2000 Imagineer Software Limited
*
* Notes:         
* Private func:  
* History:       Modified from original CLAPACK source code 
*
**************************************************************************/

#ifndef _GAN_DPPTRF_H
#define _GAN_DPPTRF_H

#include <gandalf/common/misc_defs.h>
#include <gandalf/linalg/linalg_defs.h>

#ifdef __cplusplus
extern "C" {
#endif

/* only declare this function locally if there is no LAPACK installed */
#if !defined(HAVE_LAPACK) || defined(FORCE_LOCAL_LAPACK)
Gan_Bool gan_dpptrf ( Gan_LapackUpLoFlag upper, long n, double *ap,
                      long *info );
#endif

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _GAN_DPPTRF_H */

