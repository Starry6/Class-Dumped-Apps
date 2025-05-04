@interface AWENearbyAttributedLabelTextModel : AWENearbyAttributedLabelBaseModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString color;
@property (nonatomic) NSString font;
@property (nonatomic) double fontSize;
- (double)fontSize;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (void)setFontSize:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
+ (id)JSONKeyPathsByPropertyKey;
@end
