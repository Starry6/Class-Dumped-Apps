@interface BWSoftISPProcessorControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) ^{opaqueCMSampleBuffer=} frame;
@property (nonatomic) ^{__CVBuffer=} auxiliaryBuffer;
@property (nonatomic) NSInteger processingMode;
@property (nonatomic) BOOL gdcEnabled;
- (void)dealloc;
- (void)setFrame:;
- (id)frame;
- (id)description;
- (id)initWithSettings:portType:;
- (id)initWithSettings:portType:gdcEnabled:;
- (void)addFrame:;
- (void)addFrame:processingMode:;
- (id)auxiliaryBuffer;
- (void)setAuxiliaryBuffer:;
- (int)processingMode;
- (BOOL)gdcEnabled;
@end
