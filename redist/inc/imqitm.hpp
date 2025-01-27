/* @(#) MQMBID sn=p924-L211104 su=_OdbBaj17EeygWfM06SbNXw pn=include/imqitm.pre_hpp */
#ifndef _IMQITM_HPP_
#define _IMQITM_HPP_

//  Library:       IBM MQ
//  Component:     IMQI (IBM MQ C++ MQI)
//  Part:          IMQITM.HPP
//
//  Description:   "ImqItem" class declaration
//  <copyright
//  notice="lm-source-program"
//  pids=""
//  years="1994,2016"
//  crc="1000762590" >
//  Licensed Materials - Property of IBM
//
//
//
//  (C) Copyright IBM Corp. 1994, 2016 All Rights Reserved.
//
//  US Government Users Restricted Rights - Use, duplication or
//  disclosure restricted by GSA ADP Schedule Contract with
//  IBM Corp.
//  </copyright>

#include <imqerr.hpp> // ImqError


#define ImqItem ImqItm

class ImqMsg ;
class IMQ_EXPORTCLASS ImqItem : public ImqError {
public :
  // New methods:
  ImqItem ( );
  ImqItem ( const ImqItem & );
  virtual ~ ImqItem ( );
  void operator = ( const ImqItem & );
  virtual ImqBoolean copyOut ( ImqMsg & ) = 0 ;
  virtual ImqBoolean pasteIn ( ImqMsg & ) = 0 ;
  static ImqBoolean structureIdIs ( const char *, const ImqMsg & );
} ;


#endif
