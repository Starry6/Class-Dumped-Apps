@interface CMFitnessShared : NSObject
+ (BOOL)isDeviceSatellitePaired;
+ (BOOL)isWorkoutStartReminderEnabledWhenDeviceIsSatellitePaired:isInMoveTimeMode:withCurrentSetting:;
+ (BOOL)isWorkoutEndReminderEnabledWhenDeviceIsInMoveTimeMode:withCurrentSetting:;
@end
