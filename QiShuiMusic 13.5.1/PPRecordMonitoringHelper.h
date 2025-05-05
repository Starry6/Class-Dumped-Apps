@interface PPRecordMonitoringHelper : NSObject
- (void)resetWithDelegate:recentChangesInProgress:recordGenerator:;
- (void)sendChangesToDelegatesWithChangeGenerator:recordGenerator:;
- (id)initWithName:;
- (id)_handleRecentChangesWithDelegates:changeGenerator:recordGenerator:;
- (void)loadRecordsWithDelegate:recordGenerator:;
- (void)handleChangeNotificationWithName:afterDelaySeconds:handler:;
- (void)sendResetToAllDelegatesWithRecordGenerator:;
- (void).cxx_destruct;
- (BOOL)loadRecordsAndMonitorChangesWithDelegate:recordGenerator:notificationRegistrationBlock:;
- (id)_setupRecentChangesWithDelegates:recordGenerator:;
@end
