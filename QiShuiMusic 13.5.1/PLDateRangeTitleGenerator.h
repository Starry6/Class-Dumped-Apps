@interface PLDateRangeTitleGenerator : NSObject
- (id)init;
- (id)newDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:endDate:category:kind:;
- (id)dateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)dateRangeFormatterForCategory:kind:options:;
- (id)dateRangeTitleWithStartDate:endDate:category:kind:options:;
- (id)shortMonthYearDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (void).cxx_destruct;
- (id)newYearlessDateRangeFormatter;
- (id)monthYearDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)initWithLocale:;
@end
