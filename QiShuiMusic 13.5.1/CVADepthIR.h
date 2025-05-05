@interface CVADepthIR : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{__CVBuffer=} dataBuffer;
- (void)dealloc;
- (void)setTimestamp:;
- (double)timestamp;
- (id)dataBuffer;
- (id)initWithPixelBufferRef:timestamp:;
- (void)setDataBuffer:;
@end
