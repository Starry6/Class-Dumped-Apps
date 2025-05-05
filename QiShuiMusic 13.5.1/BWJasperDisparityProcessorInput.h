@interface BWJasperDisparityProcessorInput : BWStillImageProcessorControllerInput
@property (nonatomic) <BWJasperDisparityProcessorInputDelegate> delegate;
@property (nonatomic) BOOL readyToExecute;
@property (nonatomic) ^{opaqueCMSampleBuffer=} colorBuffer;
@property (nonatomic) Q colorBufferType;
@property (nonatomic) BOOL skipProcessing;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)description;
- (id)initWithSettings:portType:;
- (void)setColorBufferPTS:exposureTime:;
- (void)setColorBuffer:type:;
- (BOOL)isReadyToExecute;
- (unsigned long long)colorBufferType;
- (id)colorBuffer;
- (BOOL)skipProcessing;
- (void)setSkipProcessing:;
- (void)executeNow;
@end
