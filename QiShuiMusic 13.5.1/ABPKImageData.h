@interface ABPKImageData : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) double timestamp;
- (void)dealloc;
- (id)pixelBuffer;
- (void)setTimestamp:;
- (double)timestamp;
- (void)setPixelBuffer:;
- (id)initWithPixelBuffer:timestamp:;
@end
