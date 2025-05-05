@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) CKUploadRequestConfiguration uploadRequestConfiguration;
@property (nonatomic) NSArray assets;
@property (nonatomic) NSArray packages;
@property (nonatomic) NSArray assetMetadata;
@property (nonatomic) NSArray packageMetadata;
@property (nonatomic) NSArray unavailableAssets;
@property (nonatomic) NSArray unavailablePackages;
- (id)assets;
- (id)initWithCoder:;
- (id)uploadRequestConfiguration;
- (void)setAssets:;
- (void)setUploadRequestConfiguration:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)packages;
- (void)setPackages:;
- (id)assetMetadata;
- (void)setAssetMetadata:;
- (id)packageMetadata;
- (void)setPackageMetadata:;
- (id)unavailableAssets;
- (void)setUnavailableAssets:;
- (id)unavailablePackages;
- (void)setUnavailablePackages:;
+ (BOOL)supportsSecureCoding;
@end
