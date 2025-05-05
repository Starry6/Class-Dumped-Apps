@interface CalRecurrenceRuleDescriptionGenerator : NSObject
+ (id)localizedOfMonthStringForMonth:;
+ (id)humanReadableDescriptionWithStartDate:ofRecurrenceRuleICSString:isConcise:;
+ (id)_andDaysOfWeekString:;
+ (id)_numberedWeekDayString:;
+ (id)_daysOfWeek;
+ (id)_dayOfMonthAsString:;
+ (id)_weekDayPositionAsString:;
+ (id)_orDaysOfWeekString:;
+ (id)_customDayCombinationDescription:;
+ (long long)daysTypeForDayArray:;
@end
