@interface BWDeepZoomProcessorInput : BWStillImageProcessorControllerInput
@property (nonatomic) BOOL sampleBufferSet;
@property (nonatomic) <BWDeepZoomProcessorInputDelegate> delegate;
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) Q bufferType;
- (void)dealloc;
- (id)sampleBuffer;
- (void)setDelegate:;
- (id)delegate;
- (id)description;
- (unsigned long long)bufferType;
- (void)addSampleBuffer:bufferType:;
- (BOOL)sampleBufferSet;
- (void)setSampleBufferSet:;
@end
