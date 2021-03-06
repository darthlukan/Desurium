// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/ctocpp/domvisitor_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefDOMVisitorCToCpp::Visit(CefRefPtr<CefDOMDocument> document)
{
  if(CEF_MEMBER_MISSING(struct_, visit))
    return;

  cef_domdocument_t* documentStruct = NULL;
  if (document.get())
    documentStruct = CefDOMDocumentCppToC::Wrap(document);
  struct_->visit(struct_, documentStruct);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefDOMVisitorCToCpp, CefDOMVisitor,
    cef_domvisitor_t>::DebugObjCt = 0;
#endif

