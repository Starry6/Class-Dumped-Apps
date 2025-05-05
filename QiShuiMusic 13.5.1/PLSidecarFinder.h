@interface PLSidecarFinder : NSObject
@property (nonatomic) NSCache cachedSidecarURLsByDirectory;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)collectSidecarURLsForAssetFilename:inDirectory:context:removeWhenDone:;
- (id)cachedSidecarURLsByDirectory;
- (void)setCachedSidecarURLsByDirectory:;
+ (BOOL)_isValidExtensionForSidecar:context:;
+ (id)_findPotentialSidecarURLsInDirectory:context:;
@end
