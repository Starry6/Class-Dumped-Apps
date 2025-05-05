@interface VEPreloadModule : NSObject
+ (void)preLoadVEShader_textureRender;
+ (void)prepareHelpers;
+ (void)prepareVEContext;
+ (void)prepareVEGLShader;
+ (void)prepareVEShader_YUVRender;
+ (void)setEffectAPIUsingAsync;
+ (void)setupVideoEditor;
@end
