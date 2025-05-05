@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest
@property (nonatomic) Q progressCount;
@property (nonatomic) Q maxProgressCount;
@property (nonatomic) double progressRescheduleDelay;
- (void)setUp;
- (void)startTest;
- (void)cloudKitEventNotificationManager:syncProgressDidUpdate:;
- (id)createSyncStatisticsForMockSyncState:;
- (unsigned long long)progressCount;
- (void)setProgressCount:;
- (unsigned long long)maxProgressCount;
- (void)setMaxProgressCount:;
- (double)progressRescheduleDelay;
- (void)setProgressRescheduleDelay:;
@end
