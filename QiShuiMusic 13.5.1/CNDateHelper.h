@interface CNDateHelper : NSObject
+ (id)gregorianCalendar;
+ (id)dateWithYear:month:day:hour:minute:second:timeZone:;
+ (id)gregorianDateComponentsFromDateComponents:;
+ (BOOL)isGregorianDerivedCalendar:;
+ (BOOL)isGregorianDerivedCalendarIdentifier:;
+ (BOOL)isComponentsEmpty:;
+ (id)gregorianCalendarInGMT;
+ (long long)currentGregorianYearInGMT;
+ (long long)gregorianYearInGMTFromDate:;
+ (long long)gregorianYearFromDate:;
+ (id)dateWithYear:month:day:;
+ (id)componentsFromDate:;
+ (id)componentsForJanuary1WithYear:;
+ (id)dateComponentsInCalendar:fromGregorianDateComponents:;
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:timeZone:;
+ (id)dateComponentsFromDateComponents:preservingUnits:;
@end
