@interface VLTraceRecorder : NSObject
- (void)start;
- (void)finish;
- (void).cxx_destruct;
- (id)initWithDirectory:;
- (void)recordAttempt:;
- (void)_beginTraceIfNecessary;
- (void)_recordAttemptOnIsolationQueue:;
- (void)_finishOnIsolationQueue;
+ (id)defaultDirectory;
@end
