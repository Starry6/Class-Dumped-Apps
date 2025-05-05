@interface BSEventQueueLock : NSObject
@property (nonatomic) NSString reason;
- (void)dealloc;
- (id)reason;
- (id)initWithEventQueue:reason:;
- (void).cxx_destruct;
- (void)relinquish;
- (id)description;
@end
