@interface SFAutomaticPasswordInputView : UIInputView
@property (nonatomic) q keyboardType;
@property (nonatomic) <SFAutomaticPasswordInputViewDelegate> delegate;
@property (nonatomic) <SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) BOOL shouldAllowSelfSizing;
- (long long)keyboardType;
- (void)setKeyboardAppearance:;
- (id)intrinsicContentSize;
- (void)setDelegate:;
- (BOOL)allowsSelfSizing;
- (long long)keyboardAppearance;
- (id)delegate;
- (void).cxx_destruct;
- (void)_useStrongPasswordButtonAction:;
- (id)initWithInputViewStyle:keyboardType:;
- (id)inputViewSizing;
- (void)setInputViewSizing:;
- (BOOL)shouldAllowSelfSizing;
- (void)setShouldAllowSelfSizing:;
@end
