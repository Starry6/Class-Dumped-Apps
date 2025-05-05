@interface CDBRecurrenceGenerator : CalRecurrenceGenerator
- (id)nextOccurrenceDateWithCalRecurrences:exceptionDates:initialDate:afterDate:;
- (id)copyOccurrenceDatesWithInitialDate:calRecurrences:rangeStart:rangeEnd:timeZone:;
- (void)_prepareForCalRecurrence:locked:;
- (void)_setupForCalEvent:locked:;
- (id)copyOccurrenceDatesWithCalEvent:startDate:endDate:timeZone:limit:locked:;
- (id)_copyOccurrenceDatesWithBirthdayEvent:startDate:endDate:timeZone:limit:locked:;
- (id)computeRecurrenceEndDateForCalEvent:recurrenceRule:locked:;
@end
