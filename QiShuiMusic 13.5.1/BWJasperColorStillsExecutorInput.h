@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorControllerInput
@property (nonatomic) <BWJasperColorStillsExecutorInputDelegate> delegate;
@property (nonatomic) BOOL readyToExecute;
@property (nonatomic) NSArray pointClouds;
@property (nonatomic) ^{opaqueCMSampleBuffer=} colorBuffer;
@property (nonatomic) Q colorBufferType;
@property (nonatomic) BOOL needMorePointClouds;
@property (nonatomic) BOOL skipProcessing;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)description;
- (id)initWithSettings:portType:;
- (void)addPointCloud:;
- (void)setColorBufferPTS:exposureTime:;
- (void)setColorBuffer:type:;
- (BOOL)needMorePointClouds;
- (BOOL)isReadyToExecute;
- (id)pointClouds;
- (unsigned long long)colorBufferType;
- (id)colorBuffer;
- (BOOL)skipProcessing;
- (void)setSkipProcessing:;
@end
