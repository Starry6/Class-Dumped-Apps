@interface IESECAfterLiveGuideCardProduct : MTLModel
@property (nonatomic) NSString productID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString shortTitle;
@property (nonatomic) NSArray imageURLs;
@property (nonatomic) q price;
@property (nonatomic) q marketPrice;
@property (nonatomic) NSString recommendText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarketPrice:;
- (long long)marketPrice;
- (id)recommendText;
- (void)setRecommendText:;
- (id)productID;
- (void)setName:;
- (void)setProductID:;
- (void)setShortTitle:;
- (void).cxx_destruct;
- (id)shortTitle;
- (id)name;
- (long long)price;
- (void)setPrice:;
- (id)imageURLs;
- (void)setImageURLs:;
+ (id)JSONKeyPathsByPropertyKey;
@end
