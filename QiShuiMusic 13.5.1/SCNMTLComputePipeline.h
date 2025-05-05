@interface SCNMTLComputePipeline : NSObject
@property (nonatomic) <MTLComputePipelineState> state;
@property (nonatomic) <MTLFunction> computeFunction;
- (id)init;
- (void)dealloc;
- (void)setState:;
- (id)computeFunction;
- (id)state;
- (id)description;
- (void)setComputeFunction:;
@end
