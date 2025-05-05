@interface PHRelatedFetchOptions : NSObject
@property (nonatomic) BOOL debugInfoEnabled;
@property (nonatomic) NSArray excludedAssetCollections;
@property (nonatomic) PHAsset referenceAsset;
@property (nonatomic) Q fetchLimit;
@property (nonatomic) BOOL enableDiversity;
@property (nonatomic) PHPhotoLibrary photoLibrary;
- (id)photoLibrary;
- (void)setFetchLimit:;
- (unsigned long long)fetchLimit;
- (id)referenceAsset;
- (void)setPhotoLibrary:;
- (void).cxx_destruct;
- (id)excludedAssetCollections;
- (void)setExcludedAssetCollections:;
- (void)setReferenceAsset:;
- (BOOL)enableDiversity;
- (void)setEnableDiversity:;
- (BOOL)isDebugInfoEnabled;
- (void)setDebugInfoEnabled:;
@end
