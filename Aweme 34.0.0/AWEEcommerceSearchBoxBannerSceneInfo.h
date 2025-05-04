@interface AWEEcommerceSearchBoxBannerSceneInfo : MTLModel
@property (nonatomic) q bannerSceneType;
@property (nonatomic) NSString headImgProductId;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel switchSortParams;
@property (nonatomic) NSString searchForceInsertInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headImgProductId;
- (id)searchForceInsertInfo;
- (void)setSearchForceInsertInfo:;
- (long long)bannerSceneType;
- (id)filterTrackParams;
- (id)switchSortParams;
- (void)setBannerSceneType:;
- (void)setHeadImgProductId:;
- (void)setSwitchSortParams:;
- (void).cxx_destruct;
+ (id)switchSortParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
