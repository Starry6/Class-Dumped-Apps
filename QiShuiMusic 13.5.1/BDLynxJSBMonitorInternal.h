@interface BDLynxJSBMonitorInternal : NSObject
@property (nonatomic) BOOL turnOnJSBMonitor;
@property (nonatomic) BOOL turnOnFetchMonitor;
@property (nonatomic) BOOL turnOnJSBPerfMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)codeForDict:key:defaultCode:;
- (id)dictionaryWithJsonString:;
- (id)getFetchInfoFromMessage:serverInfo:errCode:;
- (id)getFetchServerInfoFromMessage:;
- (id)getInfoWithBridgeMessage:;
- (id)getXRequestInfoFromMessage:serverInfo:;
- (BOOL)isRequestJSB:;
- (void)lynxBridge:didCallEvent:;
- (void)lynxBridge:didCallback:;
- (void)lynxBridge:didHandleMethod:;
- (void)lynxBridge:willCallEvent:;
- (void)lynxBridge:willCallback:;
- (void)lynxBridge:willHandleMethod:;
- (id)msgForDict:key:cls:;
- (void)reportErrorWithBridge:message:period:;
- (void)reportFetchErrorIfNeeded:withResultMessage:;
- (void)reportPerfWithBridge:message:;
- (void)reportXRequestErrorIfNeeded:withResultMessage:;
- (void)setTurnOnFetchMonitor:;
- (void)setTurnOnJSBMonitor:;
- (void)setTurnOnJSBPerfMonitor:;
- (id)toAdapterFetchErrorReport:withResultMessage:;
- (id)toAdapterXRequestReport:withResultMessage:;
- (id)toNormalFetchErrorReport:withResultMessage:;
- (id)toNormalXRequestReport:withResultMessage:;
- (BOOL)turnOnFetchMonitor;
- (BOOL)turnOnJSBMonitor;
- (BOOL)turnOnJSBPerfMonitor;
+ (id)getErrorInfoWithBridgeMessage:period:;
+ (id)shareInstance;
@end
