@interface MAAssetDiff : NSObject
- (id)initWithPlist:;
- (id)encodeAsPlist;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)category;
- (id)initDifferentAssetType:assetId:attributes:assetIdAttributes:dynamicAssetId:nonIdAttributes:content:url:policy:;
- (id)initFromDiff:;
- (id)initFromInverseOfCategories:;
- (BOOL)isAnythingDifferent;
- (BOOL)isSameAssetType;
- (BOOL)isSameForAllAttributes;
- (BOOL)isSameAssetId;
- (BOOL)isSameForNonAssetIdAttributes;
- (BOOL)isSameDownloadContent;
- (BOOL)isSameDownloadUrl;
- (BOOL)isSameDownloadPolicy;
- (BOOL)hasOnlyAllowedDifferences:;
+ (BOOL)supportsSecureCoding;
+ (id)requireSameAssetTypeAndAssetId;
+ (id)requireSameAssetTypeAndDownloadContent;
+ (id)requireSameAssetTypeAndAllAttributes;
+ (id)defaultAllowedDifferences;
+ (id)allowEverythingDifferent;
@end
