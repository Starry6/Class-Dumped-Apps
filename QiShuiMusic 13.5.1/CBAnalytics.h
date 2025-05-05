@interface CBAnalytics : NSObject
+ (void)sendInt:withField:andValue:;
+ (void)displayMaxCurrent:;
+ (void)sendBool:withField:andValue:;
+ (void)harmonyColor:;
+ (void)autoBrightnessUserChange:lowPower:;
+ (void)alsSelectionSwaps:;
+ (void)nightShiftCCT:;
+ (void)send:withBlock:;
+ (void)autoBrightnessEnabled:byUser:;
+ (void)alsSelectionTimes:count:;
+ (void)illuminanceHistogram:;
+ (void)cuveLevel:;
+ (void)deviceColor:;
+ (void)alsSelectionDeltas:count:;
+ (void)nightShiftEnabled:withOption:;
+ (void)nightShiftSunSchedulePermitted:;
+ (void)luminanceHistogram:withName:;
+ (void)harmonyEnabled:byUser:;
+ (void)sendSparseBins:count:withName:;
@end
