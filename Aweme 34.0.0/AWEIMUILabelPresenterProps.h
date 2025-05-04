@interface AWEIMUILabelPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) BOOL isUserSetTextAlignment;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) q numberOfLines;
@property (nonatomic) UIColor textColor;
@property (nonatomic) q textAlignment;
@property (nonatomic) q lineBreakMode;
- (BOOL)isUserSetTextAlignment;
- (void)setIsUserSetTextAlignment:;
- (id)init;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (id)attributedText;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (void)setNumberOfLines:;
- (void)setLineBreakMode:;
- (void)setAttributedText:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (void)setTextAlignment:;
- (long long)textAlignment;
- (id)textColor;
@end
