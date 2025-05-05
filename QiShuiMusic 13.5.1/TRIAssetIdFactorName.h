@interface TRIAssetIdFactorName : NSObject
@property (nonatomic) NSString<TRIAssetId> assetId;
@property (nonatomic) NSString factorName;
- (id)assetId;
- (id)copyWithReplacementAssetId:;
- (id)init;
- (id)copyWithReplacementFactorName:;
- (BOOL)isEqualToName:;
- (unsigned long long)hash;
- (id)initWithAssetId:factorName:;
- (void).cxx_destruct;
- (id)description;
- (id)factorName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)nameWithAssetId:factorName:;
@end
