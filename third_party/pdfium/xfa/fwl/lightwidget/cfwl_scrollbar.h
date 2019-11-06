// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FWL_LIGHTWIDGET_CFWL_SCROLLBAR_H_
#define XFA_FWL_LIGHTWIDGET_CFWL_SCROLLBAR_H_

#include "xfa/fwl/lightwidget/cfwl_widget.h"

class CFWL_ScrollBar : public CFWL_Widget {
 public:
  static CFWL_ScrollBar* Create();
  FWL_Error Initialize(const CFWL_WidgetProperties* pProperties = NULL);
  FX_BOOL IsVertical();
  FWL_Error GetRange(FX_FLOAT& fMin, FX_FLOAT& fMax);
  FWL_Error SetRange(FX_FLOAT fMin, FX_FLOAT fMax);
  FX_FLOAT GetPageSize();
  FWL_Error SetPageSize(FX_FLOAT fPageSize);
  FX_FLOAT GetStepSize();
  FWL_Error SetStepSize(FX_FLOAT fStepSize);
  FX_FLOAT GetPos();
  FWL_Error SetPos(FX_FLOAT fPos);
  FX_FLOAT GetTrackPos();
  FWL_Error SetTrackPos(FX_FLOAT fTrackPos);
  FX_BOOL DoScroll(uint32_t dwCode, FX_FLOAT fPos = 0.0f);
  CFWL_ScrollBar();
  virtual ~CFWL_ScrollBar();
};

#endif  // XFA_FWL_LIGHTWIDGET_CFWL_SCROLLBAR_H_