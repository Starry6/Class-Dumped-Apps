@interface MPSComputeEncoder : NSObject
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
- (id)initWithCommandBuffer:withDispatchType:;
- (id)computeCommandEncoder;
- (id)forwardingTargetForSelector:;
- (void)setComputePipelineState:;
@end
