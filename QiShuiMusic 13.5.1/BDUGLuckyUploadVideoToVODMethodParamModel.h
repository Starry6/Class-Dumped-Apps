@interface BDUGLuckyUploadVideoToVODMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString videoPath;
@property (nonatomic) BDUGLuckyUploadVideoToVODAuthConfig authConfig;
@property (nonatomic) BDUGLuckyUploadVideoToVODUploadConfig uploadConfig;
- (id)authConfig;
- (void)setAuthConfig:;
- (void)setUploadConfig:;
- (id)uploadConfig;
- (void).cxx_destruct;
- (id)videoPath;
- (void)setVideoPath:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
