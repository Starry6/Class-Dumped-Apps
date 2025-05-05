@interface TRIMobileAssetReference : TRIPBMessage
@property (nonatomic) NSString assetType;
@property (nonatomic) BOOL hasAssetType;
@property (nonatomic) NSString assetSpecifier;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (nonatomic) NSString assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL isOnDemand;
@property (nonatomic) BOOL hasIsOnDemand;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) Q size;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL isFileFactor;
@property (nonatomic) BOOL hasIsFileFactor;
+ (id)descriptor;
@end
