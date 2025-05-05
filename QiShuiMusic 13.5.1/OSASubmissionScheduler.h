@interface OSASubmissionScheduler : NSObject
+ (void)scheduleCleanupWithHomeDirectory:;
+ (void)scheduleSubmission;
+ (void)_setCadenceForActivity:;
+ (long long)_retryCount;
+ (void)_setRetryCount:;
+ (double)_lastSuccessTime;
+ (void)_saveLastSuccessTime;
+ (void)_scheduleSubmissionPermissive:;
@end
