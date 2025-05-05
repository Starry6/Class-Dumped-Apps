@interface VELVEffectProcessUtils : NSObject
@property (nonatomic) HTSGLFilter<IESVideoEngineEffectProtocol> effectProcessUnit;
@property (nonatomic) HTSVideoData videoData;
- (unsigned long long)addTemplateWithResourcePath:dependResourceParams:;
- (id)effectProcessUnit;
- (id)getTemplateStickerTextParams:;
- (id)initWithVideoData:;
- (void)setEffectProcessUnit:;
- (long long)setTemplateStickerTextParams:textParams:;
- (void)setVideoData:;
- (id)videoData;
- (void).cxx_destruct;
@end
