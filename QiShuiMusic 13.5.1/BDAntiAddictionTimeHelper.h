@interface BDAntiAddictionTimeHelper : NSObject
+ (BOOL)isTodayAntiAddictionWeekend;
+ (double)timeStampForGMTHour:inTimeStamp:;
+ (double)timeStampForHour:inDayOfTimeStamp:withTimeZone:;
+ (double)timeStampOfTodayGMTHour:;
+ (double)timeStampOfTodayHour:;
@end
