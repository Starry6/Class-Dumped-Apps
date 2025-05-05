@interface CMHealthTrackerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_queryMetMinutesFromDate:toDate:handler:;
- (void)_queryVO2MaxInputsFromRecord:handler:;
@end
