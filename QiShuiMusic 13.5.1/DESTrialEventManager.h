@interface DESTrialEventManager : DESEventManager
+ (void)_sendTrialMetrics:dimensions:factorsState:;
+ (void)sendEventMaintenanceWithShouldSkip:;
+ (void)sendEventSchedulerStartedWithPluginCount:;
+ (void)sendEventActivityShouldDeferWithConnectionDuration:;
+ (void)sendEventTasksFetchedCountForBundleID:count:;
+ (void)sendEventTaskFetchedForBundleID:factorsState:;
+ (void)sendEventTasksFetchingErrorForBundleID:error:;
+ (void)sendEventTaskScheduledStatusForBundleID:factorsState:success:;
+ (void)sendEventTaskSchedulingErrorForBundleID:factorsState:error:;
+ (void)sendEventTaskCompletedForBundleID:factorsState:duration:error:;
@end
