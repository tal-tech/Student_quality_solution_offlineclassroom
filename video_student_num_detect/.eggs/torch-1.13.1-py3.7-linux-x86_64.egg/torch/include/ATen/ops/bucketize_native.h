#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API at::Tensor bucketize_cpu(const at::Tensor & self, const at::Tensor & boundaries, bool out_int32=false, bool right=false);
TORCH_API at::Tensor & bucketize_out_cpu(const at::Tensor & self, const at::Tensor & boundaries, bool out_int32, bool right, at::Tensor & out);
TORCH_API at::Tensor bucketize_cuda(const at::Tensor & self, const at::Tensor & boundaries, bool out_int32=false, bool right=false);
TORCH_API at::Tensor & bucketize_out_cuda(const at::Tensor & self, const at::Tensor & boundaries, bool out_int32, bool right, at::Tensor & out);
TORCH_API at::Tensor & bucketize_Scalar_out(const at::Scalar & self, const at::Tensor & boundaries, bool out_int32, bool right, at::Tensor & out);
TORCH_API at::Tensor bucketize_cpu(const at::Scalar & self, const at::Tensor & boundaries, bool out_int32=false, bool right=false);
TORCH_API at::Tensor bucketize_cuda(const at::Scalar & self, const at::Tensor & boundaries, bool out_int32=false, bool right=false);
} // namespace native
} // namespace at
