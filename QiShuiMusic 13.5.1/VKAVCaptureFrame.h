@interface VKAVCaptureFrame : VKFrame
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) I orientation;
- (void)dealloc;
- (id)sampleBuffer;
- (unsigned int)orientation;
- (void)setOrientation:;
- (void)setSampleBuffer:;
- (id)imageRequestHandler;
- (id)CVImageBuffer;
@end
