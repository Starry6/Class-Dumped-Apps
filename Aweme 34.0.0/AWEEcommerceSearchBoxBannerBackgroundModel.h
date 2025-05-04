@interface AWEEcommerceSearchBoxBannerBackgroundModel : MTLModel
@property (nonatomic) AWEURLModel singleBackgroundImg;
@property (nonatomic) AWEURLModel doubleBackgroundImg;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWESearchBackgroundGradientModel bgGradientColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgGradientColor;
- (id)doubleBackgroundImg;
- (id)singleBackgroundImg;
- (void)setBgGradientColor:;
- (void)setSingleBackgroundImg:;
- (void)setDoubleBackgroundImg:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
+ (id)bgGradientColorJSONTransformer;
+ (id)singleBackgroundImgJSONTransformer;
+ (id)doubleBackgroundImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
