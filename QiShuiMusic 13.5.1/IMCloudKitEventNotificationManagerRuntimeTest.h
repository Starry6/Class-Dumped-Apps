@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase
@property (nonatomic) double defaultTestDuration;
@property (nonatomic) IMCloudKitHookTestSingleton cloudKitHooks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUp;
- (void)startTest;
- (void)tearDown;
- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:syncStateDidChange:;
- (void)cloudKitEventNotificationManager:syncProgressDidUpdate:;
- (id)cloudKitHooks;
- (void)setCloudKitHooks:;
- (id)createSyncStatisticsForMockSyncState:;
- (void)willUpdateSyncState:;
- (void)updateMockSyncState;
- (void)willSendSyncState:withSyncStatistics:;
- (void)sendSyncStateChangedEvent;
- (double)defaultTestDuration;
- (void)setDefaultTestDuration:;
@end
