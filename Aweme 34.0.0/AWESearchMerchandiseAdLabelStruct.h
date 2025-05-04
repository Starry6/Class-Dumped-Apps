@interface AWESearchMerchandiseAdLabelStruct : AWEBaseApiModel
@property (nonatomic) q textSize;
@property (nonatomic) NSString text;
@property (nonatomic) AWESearchMerchandiseAdLabelColor textColor;
@property (nonatomic) AWESearchMerchandiseAdLabelColor borderColor;
- (void)setBorderColor:;
- (id)borderColor;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (long long)textSize;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
