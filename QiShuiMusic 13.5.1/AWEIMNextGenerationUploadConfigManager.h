@interface AWEIMNextGenerationUploadConfigManager : NSObject
@property (nonatomic) AWEIMNextGenerationUploadConfigModel innerConfig;
@property (nonatomic) AWEIMNextGenerationUploadConfigModel openConfig;
- (void)setInnerConfig:;
- (BOOL)checkConfigValid:;
- (id)innerConfig;
- (id)openConfig;
- (void)setOpenConfig:;
- (void)fetchConfigWithCompletion:;
- (void).cxx_destruct;
- (void)resetConfig;
+ (id)sharedInstance;
@end
