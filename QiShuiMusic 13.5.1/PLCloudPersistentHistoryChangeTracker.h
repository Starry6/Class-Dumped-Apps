@interface PLCloudPersistentHistoryChangeTracker : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) <PLCloudPersistentHistoryChangeTrackerDelegate> delegate;
@property (nonatomic) NSString lastKnownTokenDescription;
@property (nonatomic) BOOL hasChangeTrackerToken;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (void)_registerForChangeHandlingNotifications;
- (id)fetchAllEventsInContext:;
- (void)forceTokenToCurrent;
- (void)disconnect;
- (void)setDelegate:;
- (void)_updateLastKnownTokensToToken:;
- (void)_unregisterForChangeHandlingNotifications;
- (id)currentToken;
- (void)updateLastKnownTokenToResult:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)hasChangeTrackerToken;
- (BOOL)connect;
- (id)lastKnownTokenDescription;
- (id)_eventsResultFromPersistentHistoryToken:inContext:;
- (id)name;
- (id)initWithPersistentStoreCoordinator:libraryBundle:;
- (void)changeTrackerDidReceiveChangesWithTransaction:;
- (void)saveLastKnownChangeTrackerTokenToDisk;
@end
