@interface L016Raw14PostProcessor : DefaultPostProcessor
@property (nonatomic) BOOL l010OutputFormatRAW14L016;
- (id)processedPixelBufferFrom:metadata:error:;
- (unsigned int)processedPixelFormat;
- (BOOL)l010OutputFormatRAW14L016;
- (void)setL010OutputFormatRAW14L016:;
- (id)initWithOriginalPixelFormat:l010OutputFormatRAW14L016:;
@end
