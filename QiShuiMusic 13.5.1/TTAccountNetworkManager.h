@interface TTAccountNetworkManager : NSObject
+ (void)addPassportNetRequestFilter;
+ (id)getRequestForJSONAndResponseWithURL:params:extraGetParams:needCommonParams:callback:;
+ (id)getRequestForJSONWithURL:params:callback:;
+ (id)getRequestForJSONWithURL:params:extraGetParams:needCommonParams:callback:;
+ (id)getRequestForJSONWithURL:params:needCommonParams:callback:;
+ (void)handleTuringErrorWithError:jsonObj:completion:;
+ (id)p_requestForJSONWithURL:method:params:extraGetParams:needCommonParams:follow302Redirect:needDispatch:headerField:needHandlePictureVerify:callback:;
+ (id)postRequestForJSONAndResponseWithURL:params:extraGetParams:needCommonParams:callback:;
+ (id)postRequestForJSONWithURL:params:extraGetParams:needCommonParams:callback:;
+ (id)postRequestForJSONWithURL:params:needCommonParams:callback:;
+ (id)requestForJSONWithURL:method:params:extraGetParams:needCommonParams:follow302Redirect:callback:;
+ (id)requestForJSONWithURL:method:params:extraGetParams:needCommonParams:follow302Redirect:needDispatch:callback:;
+ (id)requestForJSONWithURL:method:params:extraGetParams:needCommonParams:follow302Redirect:needDispatch:headerField:needHandlePictureVerify:callback:;
+ (id)requestForJSONWithURL:params:extraGetParams:method:needCommonParams:callback:;
+ (id)requestForJSONWithURL:params:method:needCommonParams:callback:;
+ (id)requestModel:callback:;
+ (id)requestNoDispatchForJSONWithURL:method:params:extraGetParams:needCommonParams:callback:;
+ (void)retryLastRequest;
+ (void)trackCSRFTokenErrorIfNeeded:response:;
+ (void)trackHeaderTokenAndSetCookie:response:;
+ (void)trackHttpReuqestWithLoginTokenIfNeeded:;
+ (void)trackPassportNetRequestResult:jsonObj:error:startTimeStamp:;
+ (void)trackXTTTokenErrorIfNeeded:response:;
+ (id)uploadWithURL:parameters:constructingBodyWithBlock:progress:needcommonParams:callback:;
@end
