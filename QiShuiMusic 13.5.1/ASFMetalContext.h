@interface ASFMetalContext : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLLibrary> library;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) <MTLCommandBuffer> commandBuffer;
- (id)commandBuffer;
- (void)setDevice:;
- (void)setLibrary:;
- (id)commandQueue;
- (id)library;
- (void)setCommandQueue:;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (void)setCommandBuffer:;
- (id)device;
+ (id)defaultContext;
@end
