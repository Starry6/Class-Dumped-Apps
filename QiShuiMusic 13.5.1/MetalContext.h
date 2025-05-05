@interface MetalContext : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLLibrary> defaultLibrary;
@property (nonatomic) <MTLCommandQueue> commandQueue;
- (id)createBuffer:size:option:copy:;
- (id)createComputePipelineState:multipleOfExecutionWidth:;
- (id)init;
- (id)commandQueue;
- (void).cxx_destruct;
- (id)device;
- (id)defaultLibrary;
+ (int)getThreadsPerThreadgroup:dimension:result:;
+ (id)sharedInstance;
@end
