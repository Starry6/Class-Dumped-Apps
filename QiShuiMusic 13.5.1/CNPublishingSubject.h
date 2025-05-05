@interface CNPublishingSubject : CNObservable
@property (nonatomic) CNObservable observable;
@property (nonatomic) <CNCancelable> upstreamToken;
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) CNObservableContractEnforcement enforcement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)observable;
- (void)_removeObserver:;
- (id)init;
- (void)observerDidReceiveResult:;
- (id)_allObservers;
- (void)observerDidFailWithError:;
- (id)subscribe:;
- (id)enforcement;
- (id)upstreamToken;
- (void)_addObserver:;
- (void).cxx_destruct;
- (id)initWithObservable:;
- (void)observerDidComplete;
- (id)observers;
- (void)setUpstreamToken:;
- (void)_subscribeToObservableIfNecessary;
@end
