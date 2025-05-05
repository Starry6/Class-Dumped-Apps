@interface MPSPredicatedCommandEncoder : NSObject
@property (nonatomic) <MTLComputeCommandEncoder> computeCommandEncoder;
@property (nonatomic) Q dispatchType;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBuffer:offset:atIndex:;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (void)dispatchThreadgroups:threadsPerThreadgroup:;
- (id)computeCommandEncoder;
- (id)forwardingTargetForSelector:;
- (void)setBuffers:offsets:withRange:;
- (void)setComputePipelineState:;
- (void)setBytes:length:atIndex:;
- (void)setBufferOffset:atIndex:;
- (void)dispatchThreads:threadsPerThreadgroup:;
- (id)initWithMPSCommandBuffer:commandEncoder:mpsDevice:;
+ (id)predicatedEncoderWithMPSCommandBuffer:commandEncoder:mpsDevice:;
@end
