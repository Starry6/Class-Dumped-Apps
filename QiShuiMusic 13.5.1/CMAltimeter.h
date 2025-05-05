@interface CMAltimeter : NSObject
- (id)init;
- (void)dealloc;
- (id)initPrivate;
- (void)deallocPrivate;
- (void)startRelativeAltitudeUpdatesToQueue:withHandler:;
- (void)stopRelativeAltitudeUpdates;
- (void)startSignificantElevationUpdatesWithHandler:;
- (void)stopSignificantElevationUpdates;
- (void)querySignificantElevationChangeFromDate:toDate:withHandler:;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:withHandler:;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)onFilteredPressure:;
- (void)startAbsoluteAltitudeUpdatesToQueue:withHandler:;
- (void)stopAbsoluteAltitudeUpdates;
- (void)pauseAbsoluteAltitudeUpdates;
- (void)resumeAbsoluteAltitudeUpdates;
+ (long long)authorizationStatus;
+ (void)dummySelector:;
+ (BOOL)isRelativeAltitudeAvailable;
+ (BOOL)isSignificantElevationAvailable;
+ (BOOL)isAbsoluteAltitudeAvailable;
@end
