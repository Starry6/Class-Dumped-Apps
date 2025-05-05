@interface PLDemoContentResults : NSObject
@property (nonatomic) NSArray assetIDsToDelete;
@property (nonatomic) NSArray assetsToRevert;
- (void).cxx_destruct;
- (id)assetsToRevert;
- (id)assetIDsToDelete;
- (void)setAssetIDsToDelete:;
- (void)setAssetsToRevert:;
@end
