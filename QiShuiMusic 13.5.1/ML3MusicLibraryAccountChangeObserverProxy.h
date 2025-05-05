@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> calloutQueue;
@property (nonatomic) NSHashTable weakObservers;
@property (nonatomic) NSHashTable readonlyObservers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)removeAccountChangeObserver:;
- (id)weakObservers;
- (id)serialQueue;
- (id)calloutQueue;
- (void).cxx_destruct;
- (id)_init;
- (void)performDatabasePathChange:completion:;
- (void)addAccountChangeObserver:;
- (id)readonlyObservers;
- (void)emergencyDisconnectWithCompletion:;
+ (id)sharedProxy;
@end
