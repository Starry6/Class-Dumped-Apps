@interface NSRelativeDateTimeFormatter : NSFormatter
@property (nonatomic) q dateTimeStyle;
@property (nonatomic) q unitsStyle;
@property (nonatomic) q formattingContext;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSLocale locale;
- (id)stringForObjectValue:;
- (void)setCalendar:;
- (void)setLocale:;
- (id)calendar;
- (id)_stringForCalendarUnit:value:;
- (void)dealloc;
- (id)localizedStringForDate:relativeToDate:;
- (void)setUnitsStyle:;
- (void)setDateTimeStyle:;
- (id)localizedStringFromDateComponents:;
- (void)setFormattingContext:;
- (id)locale;
- (id)localizedStringFromTimeInterval:;
- (long long)formattingContext;
- (id)_stringFromDateComponents:;
- (void)_clearFormatter;
- (long long)unitsStyle;
- (long long)dateTimeStyle;
@end
