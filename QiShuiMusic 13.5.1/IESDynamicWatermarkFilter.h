@interface IESDynamicWatermarkFilter : HTSGLFilter
@property (nonatomic) NSArray waterMarkDataArray;
@property (nonatomic) IESWaterMarkData waterMarkData;
@property (nonatomic) NSMutableArray waterMarkFramebufferArray;
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) {CGSize=dd} frameSize;
@property (nonatomic) q refreshInterval;
@property (nonatomic) BOOL isWaterMarkReady;
@property (nonatomic) q waterMarkIndex;
@property (nonatomic) q waterMarkFrameCount;
@property (nonatomic) q waterMarkFrameIndex;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL panoramaMode;
@property (nonatomic) {CGPoint=dd} waterMarkPoint;
@property (nonatomic) {CGSize=dd} waterMarkSize;
- (long long)currentWaterMarkIndex:;
- (void)initWaterMarkFramebuffers;
- (id)initWithwaterMarkDataArray:useCache:context:;
- (void)initializeRenderer:;
- (BOOL)isWaterMarkReady;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (BOOL)panoramaMode;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (BOOL)renderUIImage:toFramebuffer:;
- (void)setInputFramebuffer:atIndex:;
- (void)setIsWaterMarkReady:;
- (void)setPanoramaMode:;
- (void)setWaterMarkData:;
- (void)setWaterMarkDataArray:;
- (void)setWaterMarkFrameCount:;
- (void)setWaterMarkFrameIndex:;
- (void)setWaterMarkFramebufferArray:;
- (void)setWaterMarkIndex:;
- (void)setWaterMarkPoint:;
- (void)setWaterMarkSize:;
- (id)sizeOfFBO;
- (void)updateWatermarkFramebuffer;
- (id)waterMarkData;
- (id)waterMarkDataArray;
- (long long)waterMarkFrameCount;
- (long long)waterMarkFrameIndex;
- (id)waterMarkFramebufferArray;
- (long long)waterMarkIndex;
- (id)waterMarkPoint;
- (id)waterMarkSize;
- (void)clearCache;
- (void)dealloc;
- (void)setTargetSize:;
- (long long)refreshInterval;
- (id)targetSize;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setRefreshInterval:;
- (void)setFrameSize:;
- (BOOL)useCache;
- (void)setUseCache:;
- (id)frameSize;
- (void)initializeAttributes;
@end
