@interface CMSwimTrackerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:handler:;
- (void)_stopUpdates;
- (void)_handleUpdates:;
- (void)_querySwimUpdatesFromRecord:handler:;
- (void)_querySWOLFSummaryWithSessionID:handler:;
- (void)_resetOffsets;
@end
