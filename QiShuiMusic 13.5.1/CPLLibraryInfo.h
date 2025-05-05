@interface CPLLibraryInfo : NSObject
@property (nonatomic) NSDictionary assetCounts;
@property (nonatomic) CPLFeatureVersionHistory featureVersionHistory;
@property (nonatomic) CPLAccountFlags accountFlags;
@property (nonatomic) NSData accountFlagsData;
@property (nonatomic) CPLMomentShare momentShare;
@property (nonatomic) NSNumber featureCompatibleVersion;
- (id)accountFlagsData;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)accountFlags;
- (void)encodeWithCoder:;
- (void)setAccountFlagsData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)momentShare;
- (void)setMomentShare:;
- (id)assetCounts;
- (id)prettyDescriptionWithAnchorDesciptionBlock:;
- (void)setAssetCounts:;
- (id)featureVersionHistory;
- (void)setFeatureVersionHistory:;
- (id)featureCompatibleVersion;
- (void)setFeatureCompatibleVersion:;
+ (BOOL)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:;
@end
