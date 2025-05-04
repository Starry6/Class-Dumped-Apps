@interface AWEFavoriteTagDataResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray tagData;
@property (nonatomic) Q collectionLandingTab;
@property (nonatomic) q collectsTotalStatus;
@property (nonatomic) NSArray tabDataV2;
- (long long)collectsTotalStatus;
- (void)setCollectsTotalStatus:;
- (unsigned long long)collectionLandingTab;
- (id)tabDataV2;
- (void)setCollectionLandingTab:;
- (void)setTabDataV2:;
- (void).cxx_destruct;
- (void)setTagData:;
- (id)tagData;
+ (id)tagDataJSONTransformer;
+ (id)tabDataV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
