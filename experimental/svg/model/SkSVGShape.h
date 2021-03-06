/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SkSVGShape_DEFINED
#define SkSVGShape_DEFINED

#include "SkSVGTransformableNode.h"

class SkSVGLengthContext;
class SkPaint;

class SkSVGShape : public SkSVGTransformableNode {
public:
    virtual ~SkSVGShape() = default;

    void appendChild(sk_sp<SkSVGNode>) override;

protected:
    SkSVGShape(SkSVGTag);

    void onRender(const SkSVGRenderContext&) const final;

    virtual void onDraw(SkCanvas*, const SkSVGLengthContext&, const SkPaint&) const = 0;

private:
    typedef SkSVGTransformableNode INHERITED;
};

#endif // SkSVGShape_DEFINED
