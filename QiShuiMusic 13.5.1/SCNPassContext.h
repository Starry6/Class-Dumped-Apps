@interface SCNPassContext : NSObject
@property (nonatomic) double time;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) <MTLCommandBuffer> commandBuffer;
@property (nonatomic) <MTLDevice> device;
- (id)commandBuffer;
- (double)time;
- (id)commandQueue;
- (id)device;
- (id)outputTextureWithName:;
- (id)inputTextureWithName:;
@end
