@interface AWEProfileFavoriteCollectAwemeModel : AWEBaseApiModel
@property (nonatomic) AWEProfileFavoriteCollectsListResponseModel collectsInfo;
- (id)collectsInfo;
- (void)setCollectsInfo:;
- (void).cxx_destruct;
+ (id)collectsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
