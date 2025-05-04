@interface AWEXBridgeLogService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportADLogWithParamModel:completionHandler:;
- (void)reportAppLogWithParamModel:completionHandler:;
- (void)reportMonitorLogWithParamModel:completionHandler:;
@end
