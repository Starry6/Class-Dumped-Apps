@interface AWESearchDynamicPreLayoutDispatchManager : NSObject
@property (nonatomic) CachalotRunloopIdleObserver runloopIdleObserver;
@property (nonatomic) CachalotLinkedTaskScheduler renderScheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loopEnded;
- (void)idlePeriodBegin;
- (void)idlePeriodEnd;
- (id)renderScheduler;
- (void)dispatchTask:;
- (id)runloopIdleObserver;
- (void)setRunloopIdleObserver:;
- (void)setRenderScheduler:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
