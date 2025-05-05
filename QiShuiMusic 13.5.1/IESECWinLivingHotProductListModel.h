@interface IESECWinLivingHotProductListModel : MTLModel
@property (nonatomic) IESECWinLivingLatestInfoModel latestInfo;
@property (nonatomic) NSArray products;
@property (nonatomic) BOOL isFold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFold;
- (id)latestInfo;
- (void)setIsFold:;
- (void)setLatestInfo:;
- (id)products;
- (void).cxx_destruct;
- (void)setProducts:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
