@interface AWESelectTemplateDataCache : NSObject
@property (nonatomic) NSMutableDictionary templateDict;
@property (nonatomic) NSMutableDictionary templateAssetDict;
- (id)templateDict;
- (id)templateAssetDict;
- (void)setCacheForkey:withTemplateManager:templateAsset:;
- (id)dataCacheForTemplate:;
- (id)assetsArrayForTemplate:;
- (void)setTemplateDict:;
- (void)setTemplateAssetDict:;
- (void).cxx_destruct;
@end
