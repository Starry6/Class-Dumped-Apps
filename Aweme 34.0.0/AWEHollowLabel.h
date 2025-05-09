@interface AWEHollowLabel : UIView
@property (nonatomic) BOOL shouldReconfigTextKit;
@property (nonatomic) NSTextStorage textStorage;
@property (nonatomic) NSLayoutManager layoutManager;
@property (nonatomic) NSTextContainer textContainer;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
@property (nonatomic) UIFont textFont;
@property (nonatomic) UIColor textColor;
@property (nonatomic) double maxWidth;
@property (nonatomic) NSString text;
@property (nonatomic) q lineBreakMode;
- (void)setupTextKit;
- (BOOL)shouldReconfigTextKit;
- (void)configTextKit;
- (void)setShouldReconfigTextKit:;
- (id)textStorage;
- (id)layoutManager;
- (void)setFillColor:;
- (id)fillColor;
- (long long)lineBreakMode;
- (id)textFont;
- (void)drawRect:;
- (void)setText:;
- (void)setCornerRadius:;
- (id)initWithFrame:;
- (void)setTextContainer:;
- (id)text;
- (double)maxWidth;
- (void)setTextColor:;
- (void)setTextInsets:;
- (void)setLineBreakMode:;
- (id)textInsets;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setTextStorage:;
- (id)textColor;
- (id)textContainer;
- (id)labelSize;
- (void)setLayoutManager:;
- (void)setTextFont:;
@end
