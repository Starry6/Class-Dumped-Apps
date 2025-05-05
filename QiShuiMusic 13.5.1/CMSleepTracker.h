@interface CMSleepTracker : NSObject
@property (nonatomic) CMSpringTrackerInternal _internal;
- (id)_internal;
- (BOOL)isTracking;
- (id)init;
- (void)dealloc;
- (void)startWithHandler:;
- (void)stopWithHandler:;
- (void)querySleepDataFromRecord:handler:;
+ (BOOL)isAvailable;
@end
