@interface CMSwimTracker : NSObject
@property (nonatomic) CMSwimTrackerInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:handler:;
- (void)querySwimUpdatesFromRecord:handler:;
- (void)querySWOLFSummaryWithSessionID:handler:;
+ (BOOL)isAvailable;
+ (unsigned long long)maxSwimDataEntries;
@end
