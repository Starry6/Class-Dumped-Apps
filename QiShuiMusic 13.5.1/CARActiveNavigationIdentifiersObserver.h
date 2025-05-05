@interface CARActiveNavigationIdentifiersObserver : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) CARObserverHashTable observers;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSArray activeNavigationIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (void)_setupConnection;
- (id)init;
- (void)addObserver:;
- (void)setWorkQueue:;
- (id)workQueue;
- (void)navigationOwnershipChangedTo:;
- (void)_connectionInterrupted;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setObservers:;
- (id)observers;
- (void)invalidate;
- (void)_connectionInvalidated;
- (void)activeNavigationIdentifiersChangedTo:;
- (id)activeNavigationIdentifiers;
@end
