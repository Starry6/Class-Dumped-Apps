@interface BWLearnedNRInput : BWStillImageProcessorControllerInput
@property (nonatomic) <BWLearnedNRInputDelegate> delegate;
@property (nonatomic) ^{opaqueCMSampleBuffer=} inputFrame;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)setInputFrame:;
- (id)inputFrame;
@end
