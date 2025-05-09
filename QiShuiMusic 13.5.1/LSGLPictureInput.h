@interface LSGLPictureInput : LSGLOutput
@property (nonatomic) {CGSize=dd} imageBufferSize;
@property (nonatomic) BOOL needClear;
@property (nonatomic) BOOL isAux;
@property (nonatomic) NSString key;
@property (nonatomic) I fmt;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRegion;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) {CGSize=dd} captureOutputSize;
@property (nonatomic) Q outputRotation;
@property (nonatomic) LSGLContext context;
@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic) Q fillMode;
- (void)loadTextureWithBGRABuffer:time:;
- (id)I420ToNV12:format:;
- (id)imageBufferSize;
- (void)bindVAO:;
- (id)captureOutputSize;
- (BOOL)checkEnableMipmap:dstHeight:;
- (void)checkNeedUpdateVao;
- (void)convertYUVToBGRAOutput;
- (BOOL)convertYUVToBGRAOutputWithMipmap:dstHeight:;
- (void)deleteVAO:;
- (void)generateVAO:;
- (id)initWithFormat:context:purgeFBOnGLError:;
- (id)initWithFormat:purgeFBOnGLError:;
- (void)initialPassThrough;
- (void)initialYUVConvertor;
- (BOOL)isAux;
- (void)loadTextureWithPixelBuffer:time:format:;
- (void)loadTextureWithYUVBuffer:time:;
- (BOOL)needClear;
- (unsigned long long)outputRotation;
- (void)processAuxPixelBuffer:auxTime:key:;
- (void)processPixelBuffer:time:;
- (void)processPixelBuffer:time:needRender:;
- (void)processPixelBuffer:time:needRender:releaseBuffer:;
- (void)releaseVAOIfNeeded;
- (void)removeOutputFramebuffer;
- (void)setCaptureOutputSize:;
- (void)setCropRegion:;
- (void)setImageBufferSize:;
- (void)setIsAux:;
- (void)setNeedClear:;
- (void)setOutputRotation:;
- (void)setupVAOForMipmap;
- (void)setupVAOIfNeeded;
- (void)updateCropTextureCoordinate;
- (void)updateTargetsForFrame:height:time:needRender:;
- (unsigned long long)fillMode;
- (id)init;
- (void)dealloc;
- (void)processSampleBuffer:;
- (id)key;
- (id)outputSize;
- (void)setKey:;
- (unsigned int)fmt;
- (void).cxx_destruct;
- (void)setFillMode:;
- (void)setAlwaysDiscardsLateVideoFrames:;
- (void)setOutputSize:;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (id)cropRegion;
@end
