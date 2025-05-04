@interface AWESearchMerchandisePriceBackgoundModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel backgroundImage;
@property (nonatomic) AWEURLModel iconSingleColumn;
@property (nonatomic) AWEURLModel iconDoubleColumn;
- (id)iconSingleColumn;
- (void)setIconSingleColumn:;
- (id)iconDoubleColumn;
- (void)setIconDoubleColumn:;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (void).cxx_destruct;
+ (id)backgroundImageJsonTransformer;
+ (id)iconSingleColumnJsonTransformer;
+ (id)iconDoubleColumnJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
