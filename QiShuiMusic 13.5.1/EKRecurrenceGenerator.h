@interface EKRecurrenceGenerator : CalRecurrenceGenerator
- (void)_setupForEKEvent:adjustDatesForAllDayEvents:;
- (id)copyOccurrenceDatesWithEKEvent:startDate:endDate:timeZone:limit:;
- (id)copyOccurrenceDatesWithEKEvent:startDate:endDate:timeZone:exceptionDates:limit:adjustDatesForAllDayEvents:;
- (id)copyOccurrenceDatesWithEKEvent:recurrenceRule:startDate:endDate:timeZone:limit:;
- (id)copyOccurrenceDatesWithEKEvent:recurrenceRule:startDate:endDate:timeZone:exceptionDates:limit:adjustDatesForAllDayEvents:;
- (id)copyOccurrenceDatesWithEKEvent:recurrenceRule:startDate:endDate:timeZone:exceptionDates:limit:;
- (id)_copyOccurrenceDatesWithEKEvent:recurrenceRule:startDate:endDate:timeZone:exceptionDates:limit:adjustDatesForAllDayEvents:;
- (id)adjustedExceptionDatesFromDates:fromGMTToTimeZone:;
- (BOOL)isOccurrenceDate:validForEvent:;
- (BOOL)occurrenceDate:matchesRecurrenceRule:forEvent:includeDetachedEventsInSeries:;
- (id)nextOccurrenceDateWithEKRecurrences:forCalendarItem:initialDate:afterDate:;
- (id)nextOccurrenceDateWithEKRecurrences:forCalendarItem:initialDate:afterDate:inclusive:;
- (id)nextOccurrenceDateWithEKRecurrences:forCalendarItem:exceptionDates:initialDate:afterDate:;
- (id)nextOccurrenceDateWithEKRecurrences:forCalendarItem:exceptionDates:initialDate:afterDate:inclusive:;
- (void)_prepareForEKRecurrence:forCalendarItem:;
+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:;
+ (id)datesByExpandingRule:fromDate:toDate:inTimezone:isAllDay:lunarCalendarString:;
+ (unsigned long long)_weekStartFromICSRule:;
+ (id)_daysOfWeekFromICSRule:;
+ (id)_copyDatesForLunarBirthdayFromDate:toDate:inTimeZone:lunarCalendarString:;
+ (BOOL)_isLunarBirthdayRecurrenceRule:lunarCalendarString:;
@end
