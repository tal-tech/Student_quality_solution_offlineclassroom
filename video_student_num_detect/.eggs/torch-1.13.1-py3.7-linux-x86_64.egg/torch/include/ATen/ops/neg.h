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



#include <ATen/ops/neg_ops.h>

namespace at {


// aten::neg(Tensor self) -> Tensor
inline at::Tensor neg(const at::Tensor & self) {
    return at::_ops::neg::call(self);
}

// aten::neg_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & neg_(at::Tensor & self) {
    return at::_ops::neg_::call(self);
}

// aten::neg.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & neg_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::neg_out::call(self, out);
}

// aten::neg.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & neg_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::neg_out::call(self, out);
}

}
