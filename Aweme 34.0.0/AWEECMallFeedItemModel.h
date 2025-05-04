@interface AWEECMallFeedItemModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString itemID;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSArray productInfo;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (id)extraDict;
- (void)setExtraDict:;
- (void)bindAwemeWithMallInfo;
- (id)itemID;
- (void)setItemID:;
- (id)productInfo;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setProductInfo:;
+ (id)awemeJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
