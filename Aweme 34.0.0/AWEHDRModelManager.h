@interface AWEHDRModelManager : NSObject
+ (BOOL)isAlgorithmModelDownloaded;
+ (void)downloadAlgorithmModelIfNeededWithCompletion:;
+ (void)p_downloadAlgorithmModelIfNeededWithCompletion:;
+ (BOOL)enableVideoHDR;
+ (BOOL)useOneKeyHDR;
+ (id)modelPathForScene:;
+ (id)lensModelPath;
+ (id)lensHDRModelNames;
+ (id)modelNameForScene:;
@end
