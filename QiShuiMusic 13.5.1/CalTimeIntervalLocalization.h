@interface CalTimeIntervalLocalization : NSObject
+ (id)_localizedTimeStringForTimedEventDuration:abbreviate:;
+ (id)localizedStringForInterval:withOptions:;
+ (id)_localizedTimeStringForAllDayEventDuration:includeAlert:;
+ (id)_stringWithDurations:timeUnits:;
+ (id)_localizedStringWithTimeString:rawDuration:options:;
+ (void)_calculateDurations:timeUnits:forDuration:allDay:abbreviate:;
+ (void)_calculateDurations:timeUnits:forDuration:allDay:dayDuration:hourDuration:minuteDuration:secondDuration:abbreviate:;
@end
