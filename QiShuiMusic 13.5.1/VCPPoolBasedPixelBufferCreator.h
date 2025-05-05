@interface VCPPoolBasedPixelBufferCreator : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithBufferWidth:bufferHeight:andPixelFormat:;
- (int)_createPixelBufferPool:withBufferWidth:bufferHeight:andPixelFormat:;
- (int)createPixelBuffer:;
@end
