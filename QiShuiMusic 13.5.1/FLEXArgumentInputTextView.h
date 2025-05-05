@interface FLEXArgumentInputTextView : FLEXArgumentInputView
@property (nonatomic) UITextView inputTextView;
@property (nonatomic) UILabel placeholderLabel;
@property (nonatomic) Q numberOfInputLines;
@property (nonatomic) NSString inputPlaceholderText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithArgumentTypeEncoding:;
- (id)createToolBar;
- (void)setInputPlaceholderText:;
- (id)inputPlaceholderText;
- (BOOL)inputViewIsFirstResponder;
- (void)layoutSubviews;
- (unsigned long long)numberOfInputLines;
- (double)inputTextViewHeight;
- (id)sizeThatFits:;
- (void)textViewDidChange:;
- (id)inputTextView;
- (void)setInputTextView:;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:;
- (void).cxx_destruct;
+ (id)inputFont;
@end
