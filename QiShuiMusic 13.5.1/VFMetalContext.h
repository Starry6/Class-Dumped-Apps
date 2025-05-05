@interface VFMetalContext : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLLibrary> library;
@property (nonatomic) <MTLCommandQueue> commandQueue;
- (void)Release;
- (void)setDevice:;
- (void)setLibrary:;
- (id)commandQueue;
- (id)library;
- (void)setCommandQueue:;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)device;
@end
