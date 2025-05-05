@interface PLLockedResourceTransferRecovery : NSObject
@property (nonatomic) PLFileSystemImportAsset transferAsset;
@property (nonatomic) NSURL destinationDirectoryURL;
- (void).cxx_destruct;
- (id)initWithTransferImportAsset:destinationDirectoryURL:;
- (BOOL)recoverFromInProgressLockedTransferForImportAsset:pathManager:;
- (id)transferAsset;
- (id)destinationDirectoryURL;
+ (void)_validateAsset:pathManager:;
+ (unsigned short)oppositeBundleScope:;
+ (BOOL)isStaleResourceURL:asset:resource:pathManager:;
+ (id)lockedTransferRecoveryMarkerFileExtension;
+ (id)dcimDirectoryForAssetDirectory:filename:bundleScope:pathManager:;
+ (id)dontImportMarkerFileURLForAsset:bundleScope:pathManager:;
+ (id)assetDirectoryForAsset:bundleScope:pathManager:;
+ (BOOL)updateAssetPropertiesAndSaveForAsset:moveToDestinationScope:library:error:;
+ (id)assetMainScopeDirectoryFromMarkerFilePathRelativeToBundle:pathManager:;
+ (id)pathToResourceDirectoryForPhotoDirectoryType:fromMarkerFilePathRelativeToBundle:pathManager:;
+ (void)enumerateFilesInDirectoryWithType:forMarkerFilePathRelativeToBundle:pathManager:block:;
+ (id)dcimFileURLForAsset:cplResourceType:version:recipeID:resourceType:utiString:bundleScope:pathManager:;
+ (id)dcimFileURLForAsset:resource:bundleScope:pathManager:;
+ (id)destinationURLForResource:asset:bundleScope:pathManager:;
+ (void)validateAssetWithUUID:inLibrary:;
@end
