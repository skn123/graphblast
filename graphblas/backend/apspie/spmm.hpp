#ifndef GRB_BACKEND_APSPIE_SPMM_HPP
#define GRB_BACKEND_APSPIE_SPMM_HPP

#include <iostream>

#include <cuda.h>
#include <cusparse.h>

#include <moderngpu.cuh>

#include "graphblas/backend/apspie/Descriptor.hpp"
#include "graphblas/backend/apspie/SparseMatrix.hpp"
#include "graphblas/backend/apspie/DenseMatrix.hpp"

namespace graphblas
{
namespace backend
{

  template <int variant, typename c, typename a, typename b, typename m,
            typename BinaryOpT,      typename SemiringT>
  Info spmm( DenseMatrix<c>*        C,
             const SparseMatrix<m>* mask,
             const BinaryOpT*       accum,
             const SemiringT*       op,
             const SparseMatrix<a>* A,
             const DenseMatrix<b>*  B,
             const Descriptor*      desc )
  {
    std::cout << "Error: Feature not implemented yet!\n";
    return GrB_SUCCESS;
  }

  template <int variant, typename c, typename a, typename b, typename m,
            typename BinaryOpT,      typename SemiringT>
  Info spmm( DenseMatrix<c>*        C,
             const SparseMatrix<m>* mask,
             const BinaryOpT*       accum,
             const SemiringT*       op,
             const DenseMatrix<a>*  A,
             const SparseMatrix<b>* B,
             const Descriptor*      desc )
  {
    std::cout << "Error: Feature not implemented yet!\n";
    return GrB_SUCCESS;
  }

}  // backend
}  // graphblas

#endif  // GRB_BACKEND_APSPIE_SPMM_HPP
