@interface HMDExcludeModuleHelper : NSObject
@property (nonatomic) double timeout;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL finished;
- (void)addClass:forDependency:;
- (void)addRuntimeClassName:forDependency:;
- (BOOL)detectExcludeSuccess_async;
- (id)initWithSuccess:failure:timeout:;
- (BOOL)isFinshed;
- (void)startDetection;
- (void)handleNotification:;
- (BOOL)isStarted;
- (id)init;
- (void)dealloc;
- (void)setTimeout:;
- (void).cxx_destruct;
- (double)timeout;
+ (id)excludeModuleForRuntimeClassName:;
+ (BOOL)verifyExcludeModuleResultWithRuntimeClassName:res:;
@end
