@interface VCPParallaxAnalyzer : NSObject
- (void).cxx_destruct;
- (int)analyzeAsset:cancel:results:;
- (id)initWithOptions:andExistingResults:;
- (int)exportWallpaperForAsset:cancel:results:;
- (int)upgradeWallPaperAtURL:toURL:cancel:results:;
@end
