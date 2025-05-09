@interface MetalFilterCrop : MetalFilterDefault
@property (nonatomic) float mCropx;
@property (nonatomic) float mCropy;
@property (nonatomic) float mCropWidth;
@property (nonatomic) float mCropHeigth;
@property (nonatomic) NSInteger oldWidth;
@property (nonatomic) NSInteger oldHeight;
@property (nonatomic) BOOL onceHandle;
- (void)setMCropHeigth:;
- (id)getEffectPatameterStr;
- (id)getFragmentShader;
- (float)mCropHeigth;
- (float)mCropWidth;
- (float)mCropx;
- (float)mCropy;
- (int)oldHeight;
- (BOOL)onceHandle;
- (long long)render:fboTexture:;
- (long long)render:sourceTexture2:sourceTexture3:fboTexture:fboTexture2:fboTexture3:;
- (void)setMCropWidth:;
- (void)setMCropx:;
- (void)setMCropy:;
- (void)setOldHeight:;
- (void)setOnceHandle:;
- (void)dealloc;
- (id)process:;
- (void)setEffect:;
- (void).cxx_destruct;
- (id)initWithDictionary:index:;
- (int)oldWidth;
- (void)setOldWidth:;
@end
