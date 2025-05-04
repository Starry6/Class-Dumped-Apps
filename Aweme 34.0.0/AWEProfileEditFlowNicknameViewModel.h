@interface AWEProfileEditFlowNicknameViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) NSString enteredNickname;
@property (nonatomic) NSString title;
@property (nonatomic) NSString placeHolder;
- (id)trackFlowType;
- (void)trackImpression;
- (Class)stepViewClass;
- (id)enteredNickname;
- (BOOL)editingChanged:;
- (void)p_trackGuideProfileNameWithEventType:;
- (void)setEnteredNickname:;
- (id)impressionEvent;
- (void)finishWithCompletion:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
