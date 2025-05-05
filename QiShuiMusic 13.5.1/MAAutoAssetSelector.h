@interface MAAutoAssetSelector : NSObject
@property (nonatomic) NSString assetVersion;
@property (nonatomic) NSString assetType;
@property (nonatomic) NSString assetSpecifier;
@property (nonatomic) NSData downloadDecryptionKey;
- (id)assetType;
- (id)initForAssetType:;
- (id)copy;
- (id)copyClearingWriteOnlyFields;
- (id)initWithCoder:;
- (id)initForAssetType:withAssetSpecifier:;
- (void)encodeWithCoder:;
- (id)persistedEntryID;
- (void)setAssetVersion:;
- (id)initForAssetType:withAssetSpecifier:matchingAssetVersion:;
- (id)initForAssetType:withAssetSpecifier:usingDecryptionKey:;
- (id)summary;
- (void).cxx_destruct;
- (id)downloadDecryptionKey;
- (id)initForAssetType:withAssetSpecifier:matchingAssetVersion:usingDecryptionKey:;
- (id)assetVersion;
- (id)description;
- (id)assetSpecifier;
- (BOOL)isEqual:;
- (void)assignAssetVersion:;
+ (BOOL)supportsSecureCoding;
@end
