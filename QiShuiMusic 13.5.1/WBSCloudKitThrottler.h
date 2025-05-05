@interface WBSCloudKitThrottler : NSObject
@property (nonatomic) <WBSCloudKitThrottlerDataStore> dataStore;
- (void)setDataStore:;
- (id)dataStore;
- (BOOL)_loadDistributionConfiguration:;
- (id)init;
- (void)reloadRecordOfPastOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (BOOL)_throttlerIsActive;
- (id)dateOfNextPermittedOperationWithPriority:;
- (void)_addOperationAtDate:;
- (void)operationWithPriority:didCompleteWithResult:;
- (double)_test_numberOfSecondsToMonitor;
- (void)_loadRecordOfPastOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)initWithPolicyString:;
- (double)_timeIntervalUntilOperationShouldBePruned:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)permitsOperationWithPriority:;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_minimumTimeBetweenOperationsForOperations:;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (void)setPolicyString:;
- (void)_saveRecordOfPastOperations;
+ (id)_distributionBucketsFromConfiguration:;
+ (BOOL)policyStringRepresentsValidPolicy:;
@end
