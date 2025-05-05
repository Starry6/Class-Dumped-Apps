@interface CMSkiTracker : NSObject
@property (nonatomic) CMSkiTrackerInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:handler:;
- (void)querySkiUpdatesFromRecord:handler:;
+ (BOOL)isAvailable;
@end
