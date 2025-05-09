@interface IXServerConnection : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) NSMutableDictionary coordinatorInstances;
@property (nonatomic) NSMutableDictionary promiseInstances;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_client_coordinatorDidInstallPlaceholderWithUUID:forRecordPromise:;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:;
- (void)_onQueue_doCleanupForCoordinatorWithUUID:;
- (void)resetDaemonConnection;
- (void)_onQueue_scanForAndRemoveEmptyHashTables;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (id)_client_coordinatorShouldPrioritizeWithUUID:;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:;
- (id)_client_promiseWithUUID:didCancelWithReason:client:;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;
- (id)_client_coordinatorShouldResumeWithUUID:;
- (void)setXpcConnection:;
- (void)unregisterForUpdatesForDataPromiseWithUUID:;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)_client_coordinatorShouldBeginRestoringUserDataWithUUID:;
- (id)_client_coordinatorDidCompleteSuccessfullyWithUUID:forRecordPromise:;
- (id)_client_coordinatorDidRegisterForObservationWithUUID:;
- (id)xpcConnection;
- (id)promiseInstances;
- (void).cxx_destruct;
- (void)_onQueue_reSetupObserversAfter:;
- (void)unregisterForUpdatesForAppInstallCoordinatorWithUUID:;
- (id)_client_promiseDidCompleteSuccessfullyWithUUID:;
- (id)_client_coordinatorWithUUID:didCancelWithReason:client:;
- (void)_onQueue_doCleanupForPromiseWithUUID:;
- (id)_client_coordinatorShouldPauseWithUUID:;
- (id)coordinatorInstances;
- (void)registerAppInstallCoordinatorForUpdates:notifyDaemon:;
- (id)_client_coordinatorWithUUID:configuredPromiseDidBeginFulfillment:;
- (id)_client_coordinatorWithUUID:didUpdateProgress:forPhase:overallProgress:;
- (id)internalQueue;
- (void)registerDataPromiseForUpdates:notifyDaemon:;
+ (id)retrySynchronousIPC:;
+ (id)sharedConnection;
@end
