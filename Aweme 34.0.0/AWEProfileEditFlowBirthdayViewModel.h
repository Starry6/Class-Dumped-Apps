@interface AWEProfileEditFlowBirthdayViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) NSDate lastSelectedDate;
@property (nonatomic) NSDate selectedDate;
- (id)trackFlowType;
- (Class)stepViewClass;
- (BOOL)p_needSubmitChanges;
- (id)impressionEvent;
- (void)finishWithCompletion:;
- (id)init;
- (void).cxx_destruct;
- (id)selectedDate;
- (void)setSelectedDate:;
- (id)lastSelectedDate;
- (void)setLastSelectedDate:;
@end
