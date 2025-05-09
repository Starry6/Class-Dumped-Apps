@interface AWEConcernGoodsLifeFeedSpuCardShareInfo : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray images;
@property (nonatomic) NSString activityPrice;
@property (nonatomic) NSString originPrice;
@property (nonatomic) q shareSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityPrice;
- (void)setActivityPrice:;
- (id)originPrice;
- (void)setOriginPrice:;
- (long long)shareSource;
- (void)setShareSource:;
- (id)schema;
- (id)images;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)type;
- (void)setImages:;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)activityPriceJSONTransformer;
+ (id)originPriceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end
