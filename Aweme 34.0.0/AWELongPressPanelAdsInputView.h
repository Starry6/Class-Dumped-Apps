@interface AWELongPressPanelAdsInputView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) BOOL inputIsShowing;
@property (nonatomic) DUXTextArea textInputView;
@property (nonatomic) UIView textInputSuperView;
- (void)configUI;
- (void)prepareShowWithTextInputView:textInputSuperView:originFrame:;
- (id)textInputSuperView;
- (void)updateTextForMaxLength;
- (BOOL)inputIsShowing;
- (void)setInputIsShowing:;
- (void)setTextInputSuperView:;
- (void)keyboardWillHide:;
- (void)dealloc;
- (id)textInputView;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)keyboardWillShow:;
- (void)setTextInputView:;
- (void)handleTap:;
@end
