@interface AWEDPUndertakeEventListenModule : NSObject
@property (nonatomic) NSMutableArray eventListenerModelArray;
@property (nonatomic) BOOL enableHook;
@property (nonatomic) NSArray hookEventList;
- (BOOL)enableHook;
- (BOOL)undertakeHookEventV3:params:;
- (id)hookEventList;
- (id)eventListenerModelArray;
- (void)registerEventListenerOnce:needTrigger:handler:;
- (void)setEnableHook:;
- (void)setHookEventList:;
- (void)setEventListenerModelArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
