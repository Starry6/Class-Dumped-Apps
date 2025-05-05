@interface TUAbstractScreenTimeObserver : NSObject
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) <TUScreenTimeStateDataSource> screenTimeDataSource;
@property (nonatomic) TUDelegateController<TUAbstractScreenTimeObserverDelegate> delegateController;
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) <TUNotifyObserver> notifyObserver;
- (void)dealloc;
- (id)accessorLock;
- (void)setScreenTimeEnabled:;
- (void)removeDelegate:;
- (id)delegateController;
- (void)addDelegate:queue:;
- (void).cxx_destruct;
- (id)initWithQueue:dataSource:notificationName:;
- (BOOL)isScreenTimeEnabled;
- (void)updateScreenTimeEnabled;
- (id)screenTimeDataSource;
- (id)notifyObserver;
@end
