@interface AWEAICreatePlaceholdTextView : UITextView
@property (nonatomic) double placeholderTopPadding;
@property (nonatomic) NSString placeholder;
@property (nonatomic) UIFont placeholderFont;
@property (nonatomic) UIColor placeholderColor;
- (void)textDidChanged:;
- (double)placeholderTopPadding;
- (void)setPlaceholderTopPadding:;
- (void)setPlaceholderColor:;
- (id)placeholderColor;
- (void)dealloc;
- (void)drawRect:;
- (void)setText:;
- (void)setPlaceholder:;
- (id)initWithFrame:;
- (void)setAttributedText:;
- (id)placeholder;
- (void).cxx_destruct;
- (void)setFont:;
- (id)placeholderFont;
- (void)layoutSubviews;
- (void)setPlaceholderFont:;
@end
