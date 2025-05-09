@interface VECompileEndingWatermarkUnit : NSObject
@property (nonatomic) ^{__CVBuffer=} lastProcessedPixelBuf;
@property (nonatomic) ^{__CVBuffer=} lastPixelBuf;
@property (nonatomic) {?=qiIq} previousVideoFrameTime;
@property (nonatomic) {?=qiIq} srcTotalDuration;
@property (nonatomic) UIImage lastPixelImage;
@property (nonatomic) UIImage endingWatermarkImage;
@property (nonatomic) q frameIndex;
@property (nonatomic) q status;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) float watermarkDuration;
@property (nonatomic) VEPixelBufferCopyUtils pixelBufferUtils;
@property (nonatomic) HTSGLContext htsGLContext;
@property (nonatomic) <VEProcessSampleDelegate> downstream;
@property (nonatomic) NSString route;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)endingWatermarkImage;
- (id)htsGLContext;
- (id)lastPixelBuf;
- (id)lastPixelImage;
- (id)lastProcessedPixelBuf;
- (id)pixelBufferFromCGImage:;
- (id)pixelBufferUtils;
- (id)previousVideoFrameTime;
- (void)processEndingWatermark:;
- (BOOL)processSampleData:;
- (void)reorder:size:;
- (void)setEndingWatermarkImage:;
- (void)setHtsGLContext:;
- (void)setLastPixelBuf:;
- (void)setLastPixelImage:;
- (void)setLastProcessedPixelBuf:;
- (void)setPixelBufferUtils:;
- (void)setPreviousVideoFrameTime:;
- (void)setSrcTotalDuration:;
- (void)setWatermarkDuration:;
- (id)srcTotalDuration;
- (float)watermarkDuration;
- (void)setStatus:;
- (id)init;
- (void)dealloc;
- (void)setRoute:;
- (id)route;
- (id)downstream;
- (BOOL)setConfig:;
- (void)setDownstream:;
- (void)setSemaphore:;
- (id)initWithContext:;
- (void)cancelWithError:;
- (void).cxx_destruct;
- (id)semaphore;
- (long long)status;
- (long long)frameIndex;
- (void)setFrameIndex:;
@end
