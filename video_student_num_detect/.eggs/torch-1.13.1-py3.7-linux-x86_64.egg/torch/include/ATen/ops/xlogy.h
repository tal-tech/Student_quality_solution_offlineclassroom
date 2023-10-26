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



#include <ATen/ops/xlogy_ops.h>

namespace at {


// aten::xlogy.Tensor(Tensor self, Tensor other) -> Tensor
inline at::Tensor xlogy(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::xlogy_Tensor::call(self, other);
}

// aten::xlogy.Scalar_Self(Scalar self, Tensor other) -> Tensor
inline at::Tensor xlogy(const at::Scalar & self, const at::Tensor & other) {
    return at::_ops::xlogy_Scalar_Self::call(self, other);
}

// aten::xlogy.Scalar_Other(Tensor self, Scalar other) -> Tensor
inline at::Tensor xlogy(const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::xlogy_Scalar_Other::call(self, other);
}

// aten::xlogy_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
inline at::Tensor & xlogy_(at::Tensor & self, const at::Tensor & other) {
    return at::_ops::xlogy__Tensor::call(self, other);
}

// aten::xlogy_.Scalar_Other(Tensor(a!) self, Scalar other) -> Tensor(a!)
inline at::Tensor & xlogy_(at::Tensor & self, const at::Scalar & other) {
    return at::_ops::xlogy__Scalar_Other::call(self, other);
}

// aten::xlogy.OutTensor(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::xlogy_OutTensor::call(self, other, out);
}

// aten::xlogy.OutTensor(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_outf(const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::xlogy_OutTensor::call(self, other, out);
}

// aten::xlogy.OutScalar_Self(Scalar self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_out(at::Tensor & out, const at::Scalar & self, const at::Tensor & other) {
    return at::_ops::xlogy_OutScalar_Self::call(self, other, out);
}

// aten::xlogy.OutScalar_Self(Scalar self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_outf(const at::Scalar & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::xlogy_OutScalar_Self::call(self, other, out);
}

// aten::xlogy.OutScalar_Other(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::xlogy_OutScalar_Other::call(self, other, out);
}

// aten::xlogy.OutScalar_Other(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & xlogy_outf(const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
    return at::_ops::xlogy_OutScalar_Other::call(self, other, out);
}

}
