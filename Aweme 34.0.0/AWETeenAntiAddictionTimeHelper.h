@interface AWETeenAntiAddictionTimeHelper : NSObject
+ (double)timeStampOfTodayHour:;
+ (double)timeStampForGMTHour:inTimeStamp:;
+ (double)timeStampForHour:inDayOfTimeStamp:withTimeZone:;
+ (double)timeStampOfTodayGMTHour:;
+ (BOOL)isTodayAntiAddictionWeekend;
@end
