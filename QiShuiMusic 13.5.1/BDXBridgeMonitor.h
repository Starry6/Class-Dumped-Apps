@interface BDXBridgeMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__getMonitorInfoWithContainer:completion:;
- (void)__monitorBridgePerf:perfData:container:;
- (void)__monitorErrorWithMethod:container:code:message:;
- (void)__monitorPVWithMethod:container:statusCode:callOnMainThread:;
- (id)__monitorWithContainer:;
- (id)__paramsWithContainer:;
- (id)__viewPathWithContainer:;
- (void)xBridgeDidCallbackMethod:container:statusCode:message:result:callOnMainThread:;
- (void)xBridgeDidHandleMethod:container:paramsModel:;
- (void)xBridgeWillHandleMethod:container:params:;
+ (id)sharedInstance;
+ (void)setup;
@end
