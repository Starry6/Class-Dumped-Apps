@interface MLMediaLibraryResourcesServiceClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> calloutQueue;
@property (nonatomic) NSXPCConnection xpcClientConnection;
@property (nonatomic) <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (nonatomic) NSOperationQueue accountChangeOperationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)accountChangeObserver;
- (void)setAccountChangeObserver:;
- (id)serialQueue;
- (id)accountChangeOperationQueue;
- (id)calloutQueue;
- (void).cxx_destruct;
- (void)setAccountChangeOperationQueue:;
- (void)performDatabasePathChange:completion:;
- (void)emergencyDisconnectWithCompletion:;
- (id)libraryContainerPathWithError:;
- (id)_initWithAccountChangeObserver:;
- (id)_libraryContainerPathWithError:;
- (id)xpcClientConnection;
- (id)connectionWithListenerEndpoint:;
- (void)setXpcClientConnection:;
+ (id)sharedService;
@end
