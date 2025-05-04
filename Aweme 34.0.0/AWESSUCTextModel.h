@interface AWESSUCTextModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) AWESSUCColorModel textColor;
@property (nonatomic) double fontSize;
- (double)fontSize;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (void)setFontSize:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
