@interface AWEPaySwiftImpl.FKMPayAssetMetaInfo : MTLModel
@property (nonatomic) NSString assetId;
@property (nonatomic) NSString assetType;
@property (nonatomic) NSString assetTypeCode;
@property (nonatomic) NSString instid;
- (id)assetTypeCode;
- (void)setAssetTypeCode:;
- (id)instid;
- (void)setInstid:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setAssetType:;
- (id)assetId;
- (void).cxx_destruct;
- (void)setAssetId:;
- (id)assetType;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
