@interface CMNatalimeter : NSObject
@property (nonatomic) CMNatalimeterInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)queryAbsoluteNatalimetryDataSinceRecord:withHandler:;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:withHandler:;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:;
- (void)stopAbsoluteNatalimetryDataUpdates;
+ (BOOL)isNatalimeterAvailable;
+ (id)maxNatalieEntries;
+ (double)briskMinuteMetsThreshold;
+ (double)activeMetsThreshold;
+ (id)userProfile;
+ (id)defaultUserProfile;
+ (BOOL)setUserProfile:error:;
+ (BOOL)setUserInfo:error:;
+ (BOOL)resetCalibrationDataWithError:;
+ (id)computeRestingCaloriesAtRate:user:duration:;
+ (double)computeTimeToActiveCalories:user:workoutType:;
@end
