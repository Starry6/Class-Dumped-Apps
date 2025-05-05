@interface VDMetalContext : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLLibrary> library;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) <MTLCommandBuffer> commandBuffer;
- (id)initWithDevice:Kernels:;
- (id)commandBuffer;
- (void)setDevice:;
- (void)setLibrary:;
- (id)commandQueue;
- (id)library;
- (void)setCommandQueue:;
- (void).cxx_destruct;
- (void)setCommandBuffer:;
- (id)device;
+ (id)instanceDeafultDeviceKernels:;
@end
