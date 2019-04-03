/* Stretched exponential distributions.
 * 
 * SRE, Fri Aug 19 13:51:14 2005 [St. Louis] [xref STL9/146]
 * SVN $Id$
 * SVN $URL$
 */
#ifndef eslSTRETCHEXP_INCLUDED
#define eslSTRETCHEXP_INCLUDED

#ifdef eslAUGMENT_RANDOM
#include <esl_random.h>
#endif
#ifdef eslAUGMENT_HISTOGRAM
#include <esl_histogram.h>
#endif

extern double esl_sxp_pdf    (double x, double mu, double lambda, double tau);
extern double esl_sxp_logpdf (double x, double mu, double lambda, double tau);
extern double esl_sxp_cdf    (double x, double mu, double lambda, double tau);
extern double esl_sxp_logcdf (double x, double mu, double lambda, double tau);
extern double esl_sxp_surv   (double x, double mu, double lambda, double tau);
extern double esl_sxp_logsurv(double x, double mu, double lambda, double tau);
extern double esl_sxp_invcdf (double p, double mu, double lambda, double tau);

extern double esl_sxp_generic_pdf   (double x, void *params);
extern double esl_sxp_generic_cdf   (double x, void *params);
extern double esl_sxp_generic_surv  (double x, void *params);
extern double esl_sxp_generic_invcdf(double p, void *params);

extern int esl_sxp_Plot(FILE *fp, double mu, double lambda, double tau,
			double (*func)(double x, double mu, double lambda, double tau), 
			double xmin, double xmax, double xstep);


#ifdef eslAUGMENT_RANDOM
extern double esl_sxp_Sample(ESL_RANDOMNESS *r, double mu, double lambda, double tau);
#endif

#ifdef eslAUGMENT_MINIMIZER
extern int esl_sxp_FitComplete(double *x, int n,
			       double *ret_mu, double *ret_lambda, double *ret_tau);
#ifdef eslAUGMENT_HISTOGRAM
extern int esl_sxp_FitCompleteBinned(ESL_HISTOGRAM *g,
				     double *ret_mu, double *ret_lambda, double *ret_tau);
#endif /*eslAUGMENT_HISTOGRAM*/
#endif /*eslAUGMENT_MINIMIZER*/


#endif /*eslSTRETCHEXP_INCLUDED*/
/*****************************************************************
 * Easel - a library of C functions for biological sequence analysis
 * Version 0.43; July 2016
 * Copyright (C) 2016 Howard Hughes Medical Institute
 * Other copyrights also apply. See the LICENSE file for a full list.
 * 
 * Easel is open source software, distributed under the BSD license. See
 * the LICENSE file for more details.
 *****************************************************************/