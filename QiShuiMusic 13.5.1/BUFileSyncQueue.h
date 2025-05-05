@interface BUFileSyncQueue : NSObject
@property (nonatomic) NSOperationQueue queue;
- (void)sync:completion:;
- (void)sync:completion:priority:;
- (void)setup;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (id)sharedQueue;
@end
