@interface CJPayBaseRequest : NSObject
+ (id)apiPath;
+ (id)buildBaseParams;
+ (void)setGConfigHost:;
+ (id)apiMethod;
+ (id)bdpayDeskServerUrlString;
+ (id)bdpayH5DeskServerHostString;
+ (id)buildBaseParamsWithVersion:needTimestamp:;
+ (id)buildServerUrl;
+ (id)cashierServerUrlString;
+ (id)customDeskServerUrlString;
+ (id)deskServerHostString;
+ (id)deskServerUrlString;
+ (void)eventTrack:costTime:error:response:;
+ (void)exampleMonitor:error:response:;
+ (id)gConfigHost;
+ (id)getGBDPayConfigHost;
+ (id)intergratedConfigHost;
+ (id)jhHostString;
+ (void)monitor:error:response:;
+ (id)p_buildMonitorDataWith:error:response:;
+ (void)setGBDPayConfigHost:;
+ (void)startRequestWithUrl:method:requestParams:headerFields:serializeType:callback:;
+ (void)startRequestWithUrl:method:requestParams:headerFields:serializeType:callback:needCommonParams:;
+ (void)startRequestWithUrl:requestParams:callback:;
+ (void)startRequestWithUrl:serializeType:requestParams:callback:;
+ (void)startRequestWithUrl:type:requestParams:header:callback:;
+ (id)superPayServerUrlString;
@end
