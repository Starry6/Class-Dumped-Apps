@interface IESECFeedResourceCardPanelsModel : IESECFeedResourceCardBaseNode
@property (nonatomic) IESECURLModel priceImage;
@property (nonatomic) IESECURLModel textBackgroundImage;
@property (nonatomic) IESECURLModel creditBackgroundImage;
@property (nonatomic) Q style;
@property (nonatomic) Q layout;
@property (nonatomic) NSArray products;
@property (nonatomic) IESECFeedResourceCardPanelsDecorationInfoModel decoration;
@property (nonatomic) IESECURLModel backgroundImage;
- (id)creditBackgroundImage;
- (id)priceImage;
- (void)setCreditBackgroundImage:;
- (void)setPriceImage:;
- (void)setTextBackgroundImage:;
- (id)textBackgroundImage;
- (void)setLayout:;
- (void)setStyle:;
- (void)setBackgroundImage:;
- (id)products;
- (id)backgroundImage;
- (unsigned long long)layout;
- (void).cxx_destruct;
- (unsigned long long)style;
- (void)setProducts:;
- (id)decoration;
- (void)setDecoration:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
