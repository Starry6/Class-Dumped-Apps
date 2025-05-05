@interface CNBehaviorSubject : CNObservable
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) CNObservableEvent mostRecentEvent;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNScheduler> resourceLock;
@property (nonatomic) CNObservableContractEnforcement enforcement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_removeObserver:;
- (void)observerDidReceiveResult:;
- (id)resultWithResourceLock:;
- (void)observerDidFailWithError:;
- (id)schedulerProvider;
- (id)subscribe:;
- (id)enforcement;
- (id)_addObserver:;
- (void).cxx_destruct;
- (void)setObservers:;
- (void)observerDidComplete;
- (void)performWithResourceLock:;
- (id)observers;
- (id)resourceLock;
- (void)setMostRecentEvent:;
- (id)mostRecentEvent;
- (id)initWithSeed:schedulerProvider:;
@end
