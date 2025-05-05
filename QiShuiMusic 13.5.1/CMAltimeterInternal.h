@interface CMAltimeterInternal : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_teardown;
- (id).cxx_construct;
- (void)_startElevationUpdatesWithHandler:;
- (void)_stopElevationUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:;
- (void)_stopSignificantElevationUpdates;
- (void)_querySignificantElevationChangeFromDate:toDate:withHandler:;
- (void)_startRelativeAltitudeUpdates;
- (void)_stopRelativeAltitudeUpdates;
- (void)_releaseHandlerObjects;
- (void)_startAbsoluteAltitudeUpdatesToQueue:withHandler:;
- (void)_stopAbsoluteAltitudeUpdates;
- (void)_pauseAbsoluteAltitudeUpdates;
- (void)_resumeAbsoluteAltitudeUpdates;
- (void)_handleAbsoluteAltitudeUpdate:;
@end
