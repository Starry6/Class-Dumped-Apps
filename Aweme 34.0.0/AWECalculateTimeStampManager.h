@interface AWECalculateTimeStampManager : NSObject
+ (id)getStartTimeOfToday;
+ (double)getStartTimeIntervalOfMonth:;
+ (BOOL)isValidTimeStamp:;
+ (double)getStartTimeIntervalOfLastMonth:;
+ (double)getStartTimestampOfToday;
+ (id)getStartTimeOfDay:;
+ (BOOL)timeIsBefore7;
+ (BOOL)timeIsBetween19And25;
@end
