@interface AWEProfileEditFlowGenderViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) q lastSelectedGenderType;
@property (nonatomic) q genderType;
- (id)trackFlowType;
- (Class)stepViewClass;
- (long long)lastSelectedGenderType;
- (void)setLastSelectedGenderType:;
- (id)impressionEvent;
- (void)finishWithCompletion:;
- (long long)genderType;
- (void)setGenderType:;
@end
