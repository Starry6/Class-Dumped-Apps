@interface ASSDynamicManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dynamicCheck:;
- (void)dynamicCheckCustomLocal:;
- (void)dynamicCheckDispatch:;
- (void)dynamicCheckDispatch:withCallBack:;
- (id)dynamicCheckLocal:;
- (id)getTraceDict:;
- (void)parseDynamicRPCResult:;
- (void)uploadDynamicCheckResult:traceDict:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (void)recordError:withAction:errCode:;
+ (id)sendDynamicSynchronousRequest:;
+ (id)uploadCustomFile:;
+ (void)uploadTimerCheckResult:dynamicTrace:dynamicCmd:dynamicNum:;
+ (id)sharedInstance;
@end
