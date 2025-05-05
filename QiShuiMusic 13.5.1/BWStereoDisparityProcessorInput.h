@interface BWStereoDisparityProcessorInput : BWStillImageProcessorControllerInput
@property (nonatomic) <BWStereoDisparityProcessorInputDelegate> delegate;
@property (nonatomic) BOOL equalizeTeleGainToMatchReference;
@property (nonatomic) BOOL emitAuxiliaryInput;
@property (nonatomic) ^{opaqueCMSampleBuffer=} referenceSbuf;
@property (nonatomic) ^{opaqueCMSampleBuffer=} auxiliarySbuf;
- (void)dealloc;
- (void)setDelegate:;
- (void)setEqualizeTeleGainToMatchReference:;
- (BOOL)equalizeTeleGainToMatchReference;
- (id)delegate;
- (id)description;
- (id)initWithSettings:portType:;
- (void)addSampleBuffer:;
- (id)referenceSbuf;
- (id)auxiliarySbuf;
- (BOOL)emitAuxiliaryInput;
- (void)setEmitAuxiliaryInput:;
@end
