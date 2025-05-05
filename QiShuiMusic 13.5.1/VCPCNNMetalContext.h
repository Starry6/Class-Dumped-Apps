@interface VCPCNNMetalContext : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) <MTLCommandBuffer> commandBuffer;
- (int)execute;
- (id)commandBuffer;
- (void)setDevice:;
- (id)commandQueue;
- (void)setCommandQueue:;
- (void).cxx_destruct;
- (void)setCommandBuffer:;
- (id)device;
- (id)initNewContext:;
+ (BOOL)supportGPU;
+ (BOOL)supportVectorForward;
+ (id)sharedCommandQueue;
@end
