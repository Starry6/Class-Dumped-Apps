@interface VEBlankVideoReader : VEVideoReader
@property (nonatomic) ^{__CVBuffer=} lastPixelBufferRef;
- (void)initPixelBuffer;
- (id)lastPixelBufferRef;
- (void)setLastPixelBufferRef:;
- (void)seekToTime:;
- (void)dealloc;
- (void)play;
- (id)initWithConfig:;
- (void)stop;
- (void)pause;
- (id)copySampleBufferAtTime:;
@end
