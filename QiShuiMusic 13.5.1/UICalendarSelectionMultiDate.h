@interface UICalendarSelectionMultiDate : UICalendarSelection
@property (nonatomic) NSArray selectedDates;
@property (nonatomic) <UICalendarSelectionMultiDateDelegate> delegate;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
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
- (BOOL)highlightsToday;
- (void)setSelectedDates:;
- (void)setSelectedDates:animated:;
- (id)_sanitizeDateComponents:calendar:;
- (id)selectedDates;
- (id)_removeSelectedDatesSatisfyingPredicate:;
@end
