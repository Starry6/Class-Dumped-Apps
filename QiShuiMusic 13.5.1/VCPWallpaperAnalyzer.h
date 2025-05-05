@interface VCPWallpaperAnalyzer : NSObject
- (id)init;
- (void).cxx_destruct;
- (int)createModel;
- (int)analyzeWithSceneprint:results:cancel:;
+ (id)sharedModelPool;
@end
