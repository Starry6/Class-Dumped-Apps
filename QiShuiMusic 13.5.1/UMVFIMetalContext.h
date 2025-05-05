@interface UMVFIMetalContext : NSObject
@property (nonatomic) <MTLDevice> mDevice;
@property (nonatomic) <MTLLibrary> mLibrary;
@property (nonatomic) <MTLCommandQueue> mCommandQueue;
@property (nonatomic) <MTLCommandBuffer> mCommandBuffer;
- (id)mDevice;
- (id)getCommandBuffer;
- (id)initWithDevice:libPath:;
- (id)mCommandBuffer;
- (id)mCommandQueue;
- (id)mLibrary;
- (void)setMCommandBuffer:;
- (void)setMCommandQueue:;
- (void)setMDevice:;
- (void)setMLibrary:;
- (void)waitCommandBuffer;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)defaultContext:libPath:;
@end
