@interface CNReplaySubject : CNObservable
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) _CNObservableEventBufferingStrategy recentEventStrategy;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNScheduler> resourceLock;
@property (nonatomic) CNObservableContractEnforcement enforcement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_removeObserver:;
- (id)init;
- (void)observerDidReceiveResult:;
- (id)resultWithResourceLock:;
- (void)observerDidFailWithError:;
- (id)schedulerProvider;
- (id)subscribe:;
- (id)enforcement;
- (id)initWithSchedulerProvider:;
- (void).cxx_destruct;
- (void)observerDidComplete;
- (void)performWithResourceLock:;
- (id)observers;
- (id)resourceLock;
- (id)initWithCapacity:schedulerProvider:;
- (id)initWithQueue:schedulerProvider:;
- (id)resourceLock_upToDateObserverFromObserver:;
- (void)resourceLock_scheduleReplayToObserver:;
- (id)resourceLock_removeAllObservers;
- (void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:;
- (id)recentEventStrategy;
- (void)setRecentEventStrategy:;
@end
