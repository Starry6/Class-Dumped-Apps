@interface AWEUGServerDateCalibrator : NSObject
+ (double)calculateCurrentServerTime;
+ (id)stringOfTimeInterval:;
+ (double)currentServerTimeStamp;
+ (id)accurateCurrentServerDate;
@end
