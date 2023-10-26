#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API concat {
  using schema = at::Tensor (at::TensorList, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::concat")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "concat(Tensor[] tensors, int dim=0) -> Tensor")
  static at::Tensor call(at::TensorList tensors, int64_t dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim);
};

struct TORCH_API concat_out {
  using schema = at::Tensor & (at::TensorList, int64_t, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::concat")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "concat.out(Tensor[] tensors, int dim=0, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(at::TensorList tensors, int64_t dim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim, at::Tensor & out);
};

struct TORCH_API concat_names {
  using schema = at::Tensor (at::TensorList, at::Dimname);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::concat")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "concat.names(Tensor[] tensors, Dimname dim) -> Tensor")
  static at::Tensor call(at::TensorList tensors, at::Dimname dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Dimname dim);
};

struct TORCH_API concat_names_out {
  using schema = at::Tensor & (at::TensorList, at::Dimname, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::concat")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "concat.names_out(Tensor[] tensors, Dimname dim, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(at::TensorList tensors, at::Dimname dim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Dimname dim, at::Tensor & out);
};

}} // namespace at::_ops
