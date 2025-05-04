@interface AWEEcommerceSearchCommonTagModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) AWEURLModel iconImg;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWESearchBackgroundGradientModel bgGradientColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconImg;
- (void)setIconImg:;
- (id)bgGradientColor;
- (void)setBgGradientColor:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)iconImgJSONTransformer;
+ (id)bgGradientColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
