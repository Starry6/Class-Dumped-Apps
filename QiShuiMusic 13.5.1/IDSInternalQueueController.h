@interface IDSInternalQueueController : NSObject
- (id)init;
- (BOOL)isQueueCurrent;
- (void)performBlock:waitUntilDone:;
- (void).cxx_destruct;
- (BOOL)assertQueueIsNotCurrent;
- (BOOL)assertQueueIsCurrent;
- (id)initWithName:contextKey:;
- (id)initWithQueue:;
- (void)performBlock:;
- (id)queue;
+ (id)sharedInstance;
@end
