@interface AWESmartCodecModelManager : NSObject
+ (BOOL)isAlgorithmModelDownloaded;
+ (void)downloadAlgorithmModelIfNeededWithCompletion:;
+ (void)p_downloadAlgorithmModelIfNeededWithCompletion:;
+ (id)p_modelRequestInfos;
+ (void)downloadModelIfNeeded;
+ (id)modelPath;
@end
