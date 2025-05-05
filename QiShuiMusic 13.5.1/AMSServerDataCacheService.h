@interface AMSServerDataCacheService : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)proxyWithErrorHandler:;
- (id)setUpCacheForAccountDSID:;
- (id)init;
- (void)dealloc;
- (id)granularNotificationSettingsForAccountDSID:bundleID:networkPolicy:;
- (void)_removeRemoteConnection;
- (id)updateCacheForAccountDSID:withCacheTypeIDs:;
- (id)dataForAccountDSID:cacheTypeID:networkPolicy:;
- (id)_newRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)setUpCacheForAccount:;
- (id)reminderEventsForAccount:service:eventType:networkPolicy:;
- (id)connection;
- (void).cxx_destruct;
- (id)updateCacheForAccountDSID:withCachePayload:;
- (void)setConnection:;
- (id)tearDownCacheForAccountDSID:;
- (void)setQueue:;
- (id)queue;
+ (BOOL)_serverDataCacheFeatureEnabled;
@end
