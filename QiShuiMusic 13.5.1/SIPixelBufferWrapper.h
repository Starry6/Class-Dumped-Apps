@interface SIPixelBufferWrapper : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
- (void)dealloc;
- (id)pixelBuffer;
- (id)initWithCVPixelBuffer:;
- (void)setPixelBuffer:;
- (id)initWithResolution:;
- (id)initWithResolution:pixelformat:;
@end
