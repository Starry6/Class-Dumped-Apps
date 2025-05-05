@interface MSASDaemonModel : MSASModelBase
- (id)init;
- (void)setNextActivityDate:forPersonID:;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:currentVersion:;
- (void)clearAllNextActivityDates;
- (id)earliestNextActivityDate;
- (id)nextActivityDateByPersonID;
+ (id)defaultModel;
@end
