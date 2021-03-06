// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// checkOpenMP
bool checkOpenMP();
RcppExport SEXP _N2R_checkOpenMP() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(checkOpenMP());
    return rcpp_result_gen;
END_RCPP
}
// n2Knn
Eigen::SparseMatrix<double> n2Knn(const NumericMatrix& m, int k, int nThreads, bool verbose, std::string indexType, int M, int MaxM0, float ef_search_multiplier, bool quiet);
RcppExport SEXP _N2R_n2Knn(SEXP mSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP verboseSEXP, SEXP indexTypeSEXP, SEXP MSEXP, SEXP MaxM0SEXP, SEXP ef_search_multiplierSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type indexType(indexTypeSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type MaxM0(MaxM0SEXP);
    Rcpp::traits::input_parameter< float >::type ef_search_multiplier(ef_search_multiplierSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(n2Knn(m, k, nThreads, verbose, indexType, M, MaxM0, ef_search_multiplier, quiet));
    return rcpp_result_gen;
END_RCPP
}
// n2CrossKnn
Eigen::SparseMatrix<double> n2CrossKnn(const NumericMatrix& mA, const NumericMatrix& mB, int k, int nThreads, bool verbose, std::string indexType, int M, int MaxM0, float ef_search_multiplier, bool quiet);
RcppExport SEXP _N2R_n2CrossKnn(SEXP mASEXP, SEXP mBSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP verboseSEXP, SEXP indexTypeSEXP, SEXP MSEXP, SEXP MaxM0SEXP, SEXP ef_search_multiplierSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mA(mASEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type indexType(indexTypeSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type MaxM0(MaxM0SEXP);
    Rcpp::traits::input_parameter< float >::type ef_search_multiplier(ef_search_multiplierSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(n2CrossKnn(mA, mB, k, nThreads, verbose, indexType, M, MaxM0, ef_search_multiplier, quiet));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_N2R_checkOpenMP", (DL_FUNC) &_N2R_checkOpenMP, 0},
    {"_N2R_n2Knn", (DL_FUNC) &_N2R_n2Knn, 9},
    {"_N2R_n2CrossKnn", (DL_FUNC) &_N2R_n2CrossKnn, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_N2R(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
