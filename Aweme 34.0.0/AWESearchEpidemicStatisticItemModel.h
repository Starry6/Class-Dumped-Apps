@interface AWESearchEpidemicStatisticItemModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString numberText;
@property (nonatomic) NSString colorString;
@property (nonatomic) NSString fontSize;
- (id)fontSize;
- (void)setText:;
- (id)text;
- (void)setFontSize:;
- (void).cxx_destruct;
- (void)setColorString:;
- (id)colorString;
- (id)numberText;
- (void)setNumberText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
