@interface MAAutoAssetControlStatisticsBySize : NSObject
@property (nonatomic) q patchedAssets;
@property (nonatomic) q patchedBytes;
@property (nonatomic) q fullAssets;
@property (nonatomic) q fullBytes;
- (id)init;
- (long long)patchedBytes;
- (id)initWithInitialValue:;
- (id)copy;
- (void)setPatchedBytes:;
- (void)setPatchedAssets:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (id)description;
- (void)setFullAssets:;
- (void)setFullBytes:;
- (long long)fullBytes;
- (long long)patchedAssets;
- (long long)fullAssets;
+ (BOOL)supportsSecureCoding;
@end
