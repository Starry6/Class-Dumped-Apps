@interface DESCoreAnalyticsEventManager : DESEventManager
+ (void)sendEventEvaluationForBundleID:evaluationID:duration:deferred:success:error:downloadedAttachmentCount:;
+ (void)sendEventErrorForBundleID:error:;
+ (void)sendEventDeferForBundleID:deadlineStr:;
+ (void)_sendCoreAnalyticsEvent:eventPayloadBuilder:;
+ (void)sendEventEvaluationSessionStartForBundleID:;
+ (void)sendEventFetchPolicyForBundleID:success:;
+ (void)sendEventEvaluationSessionFinishForBundleID:success:;
+ (void)sendEventActivityShouldDeferWithActivityID:connectionDuration:;
+ (void)sendEventMaintenanceWithActivityID:shouldSkip:;
+ (void)sendEventRecordsMatchedForBundleID:;
+ (void)sendEventAttachmentDownloadsBundleID:duration:success:downloadedAttachmentCount:;
+ (void)sendEventRecipeFetchedForBundleID:evaluationID:error:;
+ (void)sendEventWriteRecordForBundleID:;
+ (void)sendEventDeleteRecordForBundleID:removedCount:;
+ (void)sendEventEvaluationCompletedForBundleID:duration:deferralTime:wasDeferred:success:error:;
+ (void)sendEventRecipeExpiredForBundleID:deferralTime:;
@end
