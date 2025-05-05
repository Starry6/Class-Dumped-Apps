@interface UIDatePickerWeekMonthDayView : UIView
@property (nonatomic) UILabel dateLabel;
@property (nonatomic) UILabel weekdayLabel;
@property (nonatomic) NSString formattedDateString;
@property (nonatomic) double weekdayWidth;
@property (nonatomic) BOOL weekdayLast;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (void)setWeekdayWidth:;
- (BOOL)weekdayLast;
- (void)setWeekdayLast:;
- (id)dateLabel;
- (id)weekdayLabel;
- (id)formattedDateString;
- (void)setFormattedDateString:;
- (double)weekdayWidth;
@end
