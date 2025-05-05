@interface CalFloatingDateHelper : NSObject
+ (void)_initCustomCalendar;
+ (id)dateInTimeZone:fromFloatingDateInGMT:;
+ (id)dateInFloatingTimeZoneFromDate:inTimeZone:;
@end
