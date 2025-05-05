@interface TimeIntervalProvider : BaseDateProvider
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (void)setStartDate:;
- (id)initWithStartDate:endDate:;
- (id)_sessionTextForIndex:context:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)_rangeOfDesignatorInAnnotatedTime:;
- (id)_stringByRemovingDesignatorRange:fromString:;
- (id)_rangeOfAnnontatedTime:matchingPattern:;
- (id)initWithStartDate:endDate:calendar:locale:timeZone:;
- (id)_rangeOfHoursInAnnotatedTime:;
- (id)_fallbackSequence;
- (id)_textForSequenceItem:;
- (id)_timeIntervalFullText;
- (id)_timeIntervalDropMinutesText;
- (id)_startTimeFullText;
- (id)_startTimeDropMinutesText;
- (id)_dateIntervalWideText;
- (id)_dateIntervalNarrowText;
- (id)_timeIntervalTextWithDropMinutes:onlyStartDate:;
- (id)_dateIntervalTextWithNarrow:;
@end
