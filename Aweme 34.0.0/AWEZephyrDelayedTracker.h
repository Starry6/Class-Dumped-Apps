@interface AWEZephyrDelayedTracker : NSObject
@property (nonatomic) NSMutableArray delayedObjects;
- (void)onTrackerServiceReady;
- (void)track:param:;
- (void)trackDelayedObjects;
- (id)delayedObjects;
- (void)setDelayedObjects:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedTracker;
@end
