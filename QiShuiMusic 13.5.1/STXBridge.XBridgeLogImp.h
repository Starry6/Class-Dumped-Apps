@interface STXBridge.XBridgeLogImp : NSObject
- (void)reportADLogWithParamModel:completionHandler:;
- (void)reportAppLogWithParamModel:completionHandler:;
- (void)reportMonitorLogWithParamModel:completionHandler:;
- (id)init;
@end
