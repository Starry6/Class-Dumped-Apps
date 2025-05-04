@interface AWEIMNextGenerationUploadConfigManager : NSObject
@property (nonatomic) AWEIMNextGenerationUploadConfigModel innerConfig;
@property (nonatomic) AWEIMNextGenerationUploadConfigModel openConfig;
@property (nonatomic) AWEIMNextGenerationUploadConfigModel openFileConfig;
- (BOOL)checkConfigValid:;
- (id)innerConfig;
- (id)openConfig;
- (id)openFileConfig;
- (void)setInnerConfig:;
- (void)setOpenConfig:;
- (void)setOpenFileConfig:;
- (void)fetchConfigIfNeed;
- (void).cxx_destruct;
- (void)fetchConfigWithCompletion:;
- (void)resetConfig;
+ (id)sharedInstance;
@end
