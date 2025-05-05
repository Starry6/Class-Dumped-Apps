@interface UICalendarSelectionSingleDate : UICalendarSelection
@property (nonatomic) BOOL _selectionFollowsMonthSelection;
@property (nonatomic) <UICalendarSelectionSingleDateDelegate> delegate;
@property (nonatomic) NSDateComponents selectedDate;
- (void)setSelectedDate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)selectedDate;
- (void)didChangeCalendar:;
- (void)didChangeAvailableDateRange:;
- (void)didChangeVisibleMonth:;
- (BOOL)canSelectDate:;
- (void)didSelectDate:;
- (BOOL)shouldDeselectDate:;
- (void)didDeselectDate:;
- (void)selectAllDatesAnimated:;
- (void)willMoveToCalendarView:;
- (void)didMoveToCalendarView;
- (void)setSelectedDate:animated:;
- (void)_sendDelegateForSelectedDateChange;
- (BOOL)_selectionFollowsMonthSelection;
- (void)set_selectionFollowsMonthSelection:;
@end
