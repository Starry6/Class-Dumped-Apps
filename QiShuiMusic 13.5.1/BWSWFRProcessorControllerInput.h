@interface BWSWFRProcessorControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) ^{opaqueCMSampleBuffer=} flashFrame;
@property (nonatomic) ^{opaqueCMSampleBuffer=} ambientFrame;
@property (nonatomic) BOOL addFrameFailed;
- (void)dealloc;
- (void)addFrame:;
- (id)flashFrame;
- (id)ambientFrame;
- (BOOL)addFrameFailed;
@end
