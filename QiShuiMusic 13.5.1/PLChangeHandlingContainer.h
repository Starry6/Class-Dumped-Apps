@interface PLChangeHandlingContainer : NSObject
@property (nonatomic) NSURL libraryURL;
@property (nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (nonatomic) NSDictionary allDidSaveObjectIDsUserInfo;
- (id)libraryURL;
- (void)dealloc;
- (void)handleUnknownMergeEvent;
- (void)start;
- (void)distributeChangesSinceLastCheckpoint;
- (void)disconnectManagedObjectContext:;
- (void)stop;
- (BOOL)isMergingCoalescedSaveNotification;
- (void)beginObservingChanges;
- (void)endObservingChanges;
- (void).cxx_destruct;
- (void)unpauseLaunchEventNotifications;
- (id)initWithLibraryBundle:changePublisher:libraryServicesManager:persistentStoreCoordinator:;
- (void)publishRemoteChangeEvent:delayedSaveActionsDetail:reply:;
- (void)connectManagedObjectContext:;
- (id)allDidSaveObjectIDsUserInfo;
- (void)registerToReceiveCoreDataChanges:;
- (void)pauseLaunchEventNotifications;
@end
