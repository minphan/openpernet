/* soapSDKWebServiceBindingProxy.h
   Generated by gSOAP 2.7.13 from webservice.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapSDKWebServiceBindingProxy_H
#define soapSDKWebServiceBindingProxy_H
#include "soapH.h"
class SDKWebServiceBinding
{   public:
	/// Runtime engine context allocated in constructor
	struct soap *soap;
	/// Endpoint URL of service 'SDKWebServiceBinding' (change as needed)
	const char *endpoint;
	/// Constructor allocates soap engine context, sets default endpoint URL, and sets namespace mapping table
	SDKWebServiceBinding()
	{ soap = soap_new(); endpoint = "http://219.235.235.4/ws/sdk/webservice_sdk.php"; if (soap && !soap->namespaces) { static const struct Namespace namespaces[] = 
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns1", "urn:webservice_sdk", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap->namespaces = namespaces; } };
	/// Destructor frees deserialized data and soap engine context
	virtual ~SDKWebServiceBinding() { if (soap) { soap_destroy(soap); soap_end(soap); soap_free(soap); } };
	/// Invoke 'GetDevCamerasUrls' of service 'SDKWebServiceBinding' and return error code (or SOAP_OK)
	virtual int ns1__GetDevCamerasUrls(std::string UserName, std::string Password, std::string MAC, std::string CamId, struct ns1__GetDevCamerasUrlsResponse &_param_1) { return soap ? soap_call_ns1__GetDevCamerasUrls(soap, endpoint, NULL, UserName, Password, MAC, CamId, _param_1) : SOAP_EOM; };
	/// Invoke '__construct' of service 'SDKWebServiceBinding' and return error code (or SOAP_OK)
	virtual int ns1___USCORE_USCOREconstruct(struct ns1___USCORE_USCOREconstructResponse &_param_2) { return soap ? soap_call_ns1___USCORE_USCOREconstruct(soap, endpoint, NULL, _param_2) : SOAP_EOM; };
	/// Invoke '__destruct' of service 'SDKWebServiceBinding' and return error code (or SOAP_OK)
	virtual int ns1___USCORE_USCOREdestruct(struct ns1___USCORE_USCOREdestructResponse &_param_3) { return soap ? soap_call_ns1___USCORE_USCOREdestruct(soap, endpoint, NULL, _param_3) : SOAP_EOM; };
};
#endif