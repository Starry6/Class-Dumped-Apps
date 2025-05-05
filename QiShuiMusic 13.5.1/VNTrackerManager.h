@interface VNTrackerManager : NSObject
- (id)init;
- (long long)_maximumTrackersOfType:;
- (void).cxx_destruct;
- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:;
- (id)_getTracker:;
- (id)_createTracker:type:options:error:;
@end
