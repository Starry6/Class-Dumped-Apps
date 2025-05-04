@interface AWECoverTextTextView : UITextView
@property (nonatomic) BOOL needsUpdateFont;
@property (nonatomic) UITextView placeholderView;
- (void)p_updatePlaceholderTextView;
- (void)setNeedsUpdateFont:;
- (BOOL)needsUpdateFont;
- (void)setPlaceholderView:;
- (BOOL)becomeFirstResponder;
- (id)placeholderView;
- (BOOL)resignFirstResponder;
- (void)setText:;
- (void)setFrame:;
- (void)setBounds:;
- (void)setAttributedText:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setFont:;
- (void)setTextAlignment:;
- (void)setTextContainerInset:;
@end
