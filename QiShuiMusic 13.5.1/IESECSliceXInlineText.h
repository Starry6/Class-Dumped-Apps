@interface IESECSliceXInlineText : IESECSliceXInlineContent
@property (nonatomic) NSString text;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) Q fontStyle;
- (id)initWithElement:inlineTextConfig:;
- (void)setFontWeight:;
- (unsigned long long)fontStyle;
- (void)setText:;
- (void)setFont:;
- (void)setFontStyle:;
- (double)fontWeight;
- (unsigned long long)type;
- (void)setTextColor:;
- (double)fontSize;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (void)setFontSize:;
- (id)text;
- (BOOL)isEqual:;
- (id)bgColor;
- (void)setBgColor:;
@end
