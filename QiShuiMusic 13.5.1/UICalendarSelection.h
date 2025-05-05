@interface UICalendarSelection : NSObject
@property (nonatomic) UICalendarView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)view;
- (void).cxx_destruct;
- (id)_init;
- (void)setView:;
- (void)didChangeCalendar:;
- (void)didChangeAvailableDateRange:;
- (void)didChangeVisibleMonth:;
- (BOOL)canSelectDate:;
- (void)didSelectDate:;
- (BOOL)shouldDeselectDate:;
- (void)didDeselectDate:;
- (void)selectAllDatesAnimated:;
- (void)updateSelectableDates;
- (void)willMoveToCalendarView:;
- (void)didMoveToCalendarView;
- (BOOL)highlightsToday;
@end
