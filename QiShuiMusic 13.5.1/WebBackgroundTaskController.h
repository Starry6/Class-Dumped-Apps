@interface WebBackgroundTaskController : NSObject
@property (nonatomic) Q invalidBackgroundTaskIdentifier;
@property (nonatomic) @? backgroundTaskStartBlock;
@property (nonatomic) @? backgroundTaskEndBlock;
- (void)dealloc;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:;
- (void)endBackgroundTaskWithIdentifier:;
- (unsigned long long)invalidBackgroundTaskIdentifier;
- (void)setInvalidBackgroundTaskIdentifier:;
- (id)backgroundTaskStartBlock;
- (void)setBackgroundTaskStartBlock:;
- (id)backgroundTaskEndBlock;
- (void)setBackgroundTaskEndBlock:;
+ (id)sharedController;
@end
