@interface AVFragmentedAssetMinder : NSObject
@property (nonatomic) double mindingInterval;
@property (nonatomic) NSArray assets;
- (id)init;
- (void)dealloc;
- (id)assets;
- (double)mindingInterval;
- (id)initWithAsset:mindingInterval:;
- (BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)setMindingInterval:;
- (void)_setMindingInterval:removeAllAssets:;
- (void)addFragmentedAsset:;
- (void)removeFragmentedAsset:;
+ (id)fragmentedAssetMinderWithAsset:mindingInterval:;
@end
