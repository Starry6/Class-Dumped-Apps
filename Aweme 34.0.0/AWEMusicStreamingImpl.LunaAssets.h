@interface AWEMusicStreamingImpl.LunaAssets : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSArray assetInfos;
- (id)assetInfos;
- (void)setAssetInfos:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)assetInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
