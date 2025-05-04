@interface AWEProfileEditFlowSignatureViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) NSString enteredSignature;
- (id)trackFlowType;
- (Class)stepViewClass;
- (BOOL)p_needSubmitChanges;
- (id)enteredSignature;
- (void)setEnteredSignature:;
- (id)impressionEvent;
- (void)finishWithCompletion:;
- (void).cxx_destruct;
@end
