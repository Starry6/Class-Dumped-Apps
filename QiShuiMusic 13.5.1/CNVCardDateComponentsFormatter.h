@interface CNVCardDateComponentsFormatter : NSFormatter
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)gregorianCalendar;
- (void).cxx_destruct;
- (id)stringFromDateComponents:;
- (id)dateComponentsFromString:;
- (id)dateComponentsFromALTBDAYString:;
- (id)monthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)yearMonthDayDateFormatter;
- (id)compactYearMonthDayDateFormatter;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)monthDayStringFromDateComponents:;
- (id)yearMonthDayStringFromDateComponents:;
- (id)altBDAYStringFromDateComponents:;
- (id)stringForComponentValue:format:;
+ (id)dateComponentsFromALTBDAYString:;
@end
