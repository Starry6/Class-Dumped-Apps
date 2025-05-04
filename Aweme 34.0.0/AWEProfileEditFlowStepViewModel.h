@interface AWEProfileEditFlowStepViewModel : NSObject
@property (nonatomic) AWEProfileEditFlowViewModel flowViewModel;
@property (nonatomic) q status;
- (id)flowViewModel;
- (BOOL)isLastStep;
- (id)trackFlowType;
- (void)trackImpression;
- (Class)stepViewClass;
- (BOOL)isFirstStep;
- (void)trackCloseByClickBlank:;
- (void)setFlowViewModel:;
- (id)impressionEvent;
- (long long)index;
- (void)finishWithCompletion:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
@end
