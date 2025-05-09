@interface HTSBootLoader : NSObject
@property (nonatomic) BOOL isSuspend;
@property (nonatomic) BOOL canSuspend;
@property (nonatomic) HTSBootConfiguration configuration;
@property (nonatomic) _HTSBootDelayQueue feedReadyDelayQueue;
@property (nonatomic) _HTSBootDelayQueue launchCompletionQueue;
@property (nonatomic) _HTSBootDelayQueue foregroundDelayQueue;
@property (nonatomic) Q curLaunchState;
@property (nonatomic) <HTSBootConfigInterceptor> configInterceptor;
- (void)bootWithConfig:;
- (unsigned long long)_launchState;
- (void)_observerRunloopFree:;
- (void)_runFeedReady;
- (void)_runFirstEnterForeground;
- (void)_runLaunchCompletion;
- (void)_runOrDelayTaskOfStage:thread:block:;
- (void)boot;
- (void)bootWithConfig:interceptor:;
- (BOOL)canSuspend;
- (id)configInterceptor;
- (unsigned long long)curLaunchState;
- (id)feedReadyDelayQueue;
- (id)foregroundDelayQueue;
- (BOOL)isSuspend;
- (id)launchCompletionQueue;
- (void)runBootNodesWithList:;
- (void)setCanSuspend:;
- (void)setConfigInterceptor:;
- (void)setCurLaunchState:;
- (void)setFeedReadyDelayQueue:;
- (void)setForegroundDelayQueue:;
- (void)setIsSuspend:;
- (void)setLaunchCompletionQueue:;
- (id)init;
- (BOOL)suspend;
- (void)setConfiguration:;
- (void)resume;
- (id)configuration;
- (void).cxx_destruct;
+ (id)sharedLoader;
@end
