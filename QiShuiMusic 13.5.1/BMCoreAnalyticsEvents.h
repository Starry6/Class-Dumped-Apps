@interface BMCoreAnalyticsEvents : NSObject
+ (void)sendDatavaultEntitlementUsage:;
+ (id)dictionaryWithBookmarkResumeFailureTime:bookmarkCreationTime:publicStream:;
+ (void)sendAllStreamsEventWritten:size:streamIdentifier:;
+ (void)sendPrunePublicStream:deletionInterval:eventDeletionCount:;
+ (id)dictionaryWithDatavaultByUsageExecutableName:;
+ (id)dictionaryWithUnreadableSegment:stream:size:;
+ (void)sendBookmarkResumeFailureTime:bookmarkCreationTime:publicStream:;
+ (id)dictionaryWithPrunePublicStream:deletionInterval:eventDeletionCount:;
+ (void)sendEvent:payload:;
+ (id)dictionaryWithAllStreamsEventWritten:size:streamIdentifier:;
+ (id)dictionaryWithUnreadableEventTime:stream:segmentTime:;
+ (void)sendUnreadableSegment:stream:size:;
+ (void)sendUnreadableEventTime:stream:segmentTime:;
@end
