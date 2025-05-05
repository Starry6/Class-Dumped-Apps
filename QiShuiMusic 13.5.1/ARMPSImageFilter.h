@interface ARMPSImageFilter : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImageKernel:device:;
- (id)processPixelBuffer:format:;
@end
