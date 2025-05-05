@interface CMSpringTrackerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (BOOL)_isTracking;
- (void)_startWithHandler:;
- (void)_stopWithHandler:;
- (void)_handleStartStopResponse:handler:;
- (void)_querySpringDataFromRecord:handler:;
@end
