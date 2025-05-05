@interface SSDownloadFileManifest : NSObject
@property (nonatomic) q manifestType;
- (id)init;
- (void)dealloc;
- (id)initWithManifestType:;
- (long long)manifestType;
- (void)getPathsForFilesWithClass:completionBlock:;
- (void)rebuildManifestWithCompletionBlock:;
- (void)removeItemWithAssetPath:completionBlock:;
- (void)removeItemsWithAssetPaths:completionBlock:;
- (void)_removeItemsWithAssetPaths:completionBlock:;
@end
