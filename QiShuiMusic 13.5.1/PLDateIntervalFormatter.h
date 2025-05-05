@interface PLDateIntervalFormatter : NSObject
@property (nonatomic) NSDateIntervalFormatter dateIntervalFormatter;
@property (nonatomic) NSCalendar gmtCalendar;
@property (nonatomic) NSLocale locale;
@property (nonatomic) BOOL alwaysShowYear;
- (void)setLocale:;
- (id)init;
- (id)locale;
- (id)dateIntervalFormatter;
- (void).cxx_destruct;
- (id)stringFromStartDate:endDate:type:;
- (id)stringFromStartDate:endDate:type:showLongMonthFormatIfNeeded:;
- (BOOL)_yearIsNeededForDisplayingDate:;
- (id)gmtCalendar;
- (BOOL)alwaysShowYear;
- (void)setAlwaysShowYear:;
+ (id)_dateFormatForDateFormatterType:displayYear:displayLongMonth:;
+ (id)stringFromStartDate:endDate:type:;
+ (id)stringFromStartDate:endDate:type:showLongMonthFormatIfNeeded:;
+ (id)_currentLocalDate;
@end
