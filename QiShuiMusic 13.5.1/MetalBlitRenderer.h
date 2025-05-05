@interface MetalBlitRenderer : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) MTLRenderPipelineDescriptor pipelineStateDescriptor;
@property (nonatomic) MTLRenderPassDescriptor renderPassDescriptor;
@property (nonatomic) <MTLFunction> blitLinearFragment;
@property (nonatomic) <MTLFunction> blitNearestFragment;
- (id)blitLinearFragment;
- (id)blitNearestFragment;
- (void)drawToInteropTexture:dstOrigin:dstSize:srcTexture:srcOrigin:srcSize:flipMode:rotateMode:filterMode:waitUntilCompleted:;
- (void)drawToTextureWithEncoder:dstTexture:dstOrigin:dstSize:srcTexture:srcOrigin:srcSize:flipMode:rotateMode:filterMode:;
- (id)initWithBuiltinPipeline:;
- (id)pipelineStateDescriptor;
- (void)setBlitLinearFragment:;
- (void)setBlitNearestFragment:;
- (void)setPipelineStateDescriptor:;
- (void)dealloc;
- (void)setDevice:;
- (id)renderPassDescriptor;
- (void)setRenderPassDescriptor:;
- (id)commandQueue;
- (void)setCommandQueue:;
- (id)device;
@end
