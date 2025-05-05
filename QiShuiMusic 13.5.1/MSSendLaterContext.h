@interface MSSendLaterContext : NSObject
+ (unsigned long long)contextForCurrentDate;
+ (id)titleAndDateForSendLaterContext:;
+ (BOOL)shouldShowSendLaterDisclaimerAlertForContext:;
+ (unsigned long long)contextForDate:;
+ (id)_nextMondayMorning;
+ (id)_configuredTitleForFormat:date:;
@end
