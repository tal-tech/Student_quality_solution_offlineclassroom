#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/native_norm_ops.h>

namespace at {


// aten::native_norm(Tensor self, Scalar p=2) -> Tensor
inline at::Tensor native_norm(const at::Tensor & self, const at::Scalar & p=2) {
    return at::_ops::native_norm::call(self, p);
}

// aten::native_norm.ScalarOpt_dim_dtype(Tensor self, Scalar? p, int[1] dim, bool keepdim, ScalarType? dtype) -> Tensor
inline at::Tensor native_norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
    return at::_ops::native_norm_ScalarOpt_dim_dtype::call(self, p, dim, keepdim, dtype);
}

// aten::native_norm.out(Tensor self, Scalar p=2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & native_norm_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & p=2) {
    return at::_ops::native_norm_out::call(self, p, out);
}

// aten::native_norm.out(Tensor self, Scalar p=2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & native_norm_outf(const at::Tensor & self, const at::Scalar & p, at::Tensor & out) {
    return at::_ops::native_norm_out::call(self, p, out);
}

// aten::native_norm.ScalarOpt_dim_dtype_out(Tensor self, Scalar? p, int[1] dim, bool keepdim, ScalarType? dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & native_norm_out(at::Tensor & out, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
    return at::_ops::native_norm_ScalarOpt_dim_dtype_out::call(self, p, dim, keepdim, dtype, out);
}

// aten::native_norm.ScalarOpt_dim_dtype_out(Tensor self, Scalar? p, int[1] dim, bool keepdim, ScalarType? dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & native_norm_outf(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::native_norm_ScalarOpt_dim_dtype_out::call(self, p, dim, keepdim, dtype, out);
}

}
