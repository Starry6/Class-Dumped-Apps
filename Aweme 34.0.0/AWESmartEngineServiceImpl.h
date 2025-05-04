@interface AWESmartEngineServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)queryPackage:callback:;
- (id)createRunnerWithConfigBuilder:;
- (void)runTaskWhenEngineReady:onMainQueue:taskExecuteBlock:;
- (void)queryPackage:downloadIfNeeded:callback:;
+ (id)sharedInstance;
@end
