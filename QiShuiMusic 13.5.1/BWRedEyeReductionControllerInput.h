@interface BWRedEyeReductionControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) <BWRedEyeReductionControllerInputDelegate> inputDelegate;
@property (nonatomic) <BWStillImageProcessorControllerDelegate> processorControllerDelegate;
@property (nonatomic) BOOL requiresSensorInterfaceRawPropagation;
@property (nonatomic) ^{opaqueCMSampleBuffer=} primaryImage;
@property (nonatomic) ^{opaqueCMSampleBuffer=} auxImage;
@property (nonatomic) NSArray faceObservations;
- (void)dealloc;
- (id)inputDelegate;
- (void)setInputDelegate:;
- (id)faceObservations;
- (id)primaryImage;
- (void)addFrame:faceObservations:;
- (BOOL)requiresSensorInterfaceRawPropagation;
- (id)auxImage;
- (id)processorControllerDelegate;
- (void)setProcessorControllerDelegate:;
- (void)setRequiresSensorInterfaceRawPropagation:;
+ (BOOL)requiresInferencesFromFrame:;
@end
