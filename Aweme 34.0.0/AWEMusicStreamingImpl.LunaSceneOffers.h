@interface AWEMusicStreamingImpl.LunaSceneOffers : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSDictionary offerMap;
@property (nonatomic) NSDictionary sceneOfferList;
@property (nonatomic) q defaultPurchasePrice;
@property (nonatomic) q defaultSVIPPurchasePrice;
@property (nonatomic) NSArray toPreFetchProductIDs;
- (id)offerMap;
- (void)setOfferMap:;
- (id)sceneOfferList;
- (void)setSceneOfferList:;
- (long long)defaultPurchasePrice;
- (void)setDefaultPurchasePrice:;
- (long long)defaultSVIPPurchasePrice;
- (void)setDefaultSVIPPurchasePrice:;
- (id)toPreFetchProductIDs;
- (void)setToPreFetchProductIDs:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)offerMapJSONTransformer;
+ (id)sceneOfferListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
