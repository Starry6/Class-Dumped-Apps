@interface AWEFeedTableViewPlayTimeNotifyCenter : NSObject
@property (nonatomic) NSHashTable observers;
@property (nonatomic) BOOL optDispatchPerformance;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyPlayTimeIfNeededWithCurrentAweme:playTime:totalTime:;
- (BOOL)optDispatchPerformance;
- (void)notifyObserversWithModel:playTime:totalTime:;
- (void)setOptDispatchPerformance:;
- (id)init;
- (void)removeObserver:;
- (void)setLock:;
- (id)lock;
- (id)observers;
- (void)addObserver:;
- (void).cxx_destruct;
- (void)setObservers:;
+ (id)sharedCenter;
@end
