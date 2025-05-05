@interface CMSkiTrackerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:handler:;
- (void)_stopUpdates;
- (void)_queryUpdatesFromRecord:handler:;
- (void)_handleUpdates:;
@end
