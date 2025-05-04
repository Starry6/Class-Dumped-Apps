@interface AWERLLabelProps : AWERLProps
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor color;
@property (nonatomic) q numberOfLine;
@property (nonatomic) q textAlignment;
@property (nonatomic) q lineBreakMode;
- (void)setNumberOfLine:;
- (long long)numberOfLine;
- (id)initWithKey:viewClass:viewCreateBlock:viewUpdateBlock:viewLayoutBlock:;
- (id)propertiesSnapshot;
- (long long)lineBreakMode;
- (id)attributedText;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (void)setLineBreakMode:;
- (void)setAttributedText:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (void)setTextAlignment:;
- (long long)textAlignment;
- (id)initWithKey:;
- (id)copyWithZone:;
@end
