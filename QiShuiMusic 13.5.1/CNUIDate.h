@interface CNUIDate : NSObject
+ (void)localeDidChange:;
+ (id)currentCalendarGMT;
+ (id)gregorianCalendarGMT;
+ (id)GMTComponentsFromDate:sourceCalendar:;
+ (id)componentsFromDate:sourceCalendar:destinationCalendar:;
+ (id)yearlessGregorianComponentsFromGMTDate:;
+ (id)yearlessComponentsFromDate:calendar:;
+ (id)dateFromComponents:destinationCalendar:;
+ (id)dateByNormalizingToGMT:;
+ (BOOL)isYearlessComponents:;
@end
