@interface MAAutoAssetInfoStaged : NSObject
@property (nonatomic) q totalStagedBytes;
@property (nonatomic) Q assetsSuccessfullyStaged;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (id)description;
- (id)initWithTotalStagedBytes:withAssetsSuccessfullyStaged:;
- (long long)totalStagedBytes;
- (unsigned long long)assetsSuccessfullyStaged;
+ (BOOL)supportsSecureCoding;
@end
