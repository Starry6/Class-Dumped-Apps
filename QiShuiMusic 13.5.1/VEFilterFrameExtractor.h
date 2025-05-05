@interface VEFilterFrameExtractor : NSObject
@property (nonatomic) {CGSize=dd} frameSize;
@property (nonatomic) NSMutableArray deferedDestroyDrivers;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) NSMutableArray drivers;
- (void)addExtractDriver:;
- (id)deferedDestroyDrivers;
- (void)extractImageFromFrameBuffer:atTime:;
- (void)processWithDriver:frameBuffer:atTime:;
- (void)setDeferedDestroyDrivers:;
- (id)drivers;
- (void)dealloc;
- (id)context;
- (void)setDrivers:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setFrameSize:;
- (id)frameSize;
@end
