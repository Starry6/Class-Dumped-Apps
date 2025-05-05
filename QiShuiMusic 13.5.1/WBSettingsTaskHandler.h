@interface WBSettingsTaskHandler : NSObject
@property (nonatomic) @? startBackgroundTaskAssertionBlock;
@property (nonatomic) @? finishBackgroundTaskAssertionBlock;
- (id)init;
- (void).cxx_destruct;
- (void)_enqueueTask:;
- (void)enqueueTask:;
- (BOOL)_shouldEnqueueTask:;
- (void)_performNextTask;
- (void)_attemptCurrentTask;
- (void)_finishCurrentTask;
- (void)_currentTaskAttemptDidFinishWithError:;
- (id)startBackgroundTaskAssertionBlock;
- (void)setStartBackgroundTaskAssertionBlock:;
- (id)finishBackgroundTaskAssertionBlock;
- (void)setFinishBackgroundTaskAssertionBlock:;
@end
