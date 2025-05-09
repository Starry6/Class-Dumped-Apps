@interface LSGLPictureMixer : LSGLFilter
@property (nonatomic) I masterLayer;
@property (nonatomic) BOOL clearBeforeRender;
@property (nonatomic) BOOL cacheFramebufferForRedrawing;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) BOOL unableMixerWithSameFrameBuffer;
@property (nonatomic) NSMutableArray enableBlendArr;
@property (nonatomic) BOOL enableNewAlphaSupport;
- (void)setMasterLayer:;
- (BOOL)cacheFramebufferForRedrawing;
- (BOOL)clearBeforeRender;
- (void)clearLayer:;
- (id)enableBlendArr;
- (BOOL)enableNewAlphaSupport;
- (void)endProcessing;
- (id)getAllLayerInfoDescription;
- (id)getLayerInfo:;
- (id)getVideoInfoMessage;
- (void)informTargetsAboutNewFrameAtTime:;
- (id)initWithOutputSize:Context:;
- (unsigned int)masterLayer;
- (void)mixerRender;
- (void)needRender:;
- (void)newFrameReadyAtTime:atIndex:;
- (long long)nextAvailableTextureIndex;
- (void)setCacheFramebufferForRedrawing:;
- (void)setClearBeforeRender:;
- (void)setEnableBlendArr:;
- (void)setEnableNewAlphaSupport:;
- (void)setInputFramebuffer:atIndex:;
- (void)setLayerInfo:;
- (void)setUnableMixerWithSameFrameBuffer:;
- (id)singleViewShowRegion;
- (BOOL)unableMixerWithSameFrameBuffer;
- (void)updateLayerInfo:animated:frames:;
- (id)init;
- (void)checkForUpdate:;
- (void)dealloc;
- (id)outputSize;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setOutputSize:;
@end
