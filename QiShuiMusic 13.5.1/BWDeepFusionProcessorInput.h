@interface BWDeepFusionProcessorInput : BWStillImageProcessorControllerInput
@property (nonatomic) NSArray inputBuffers;
@property (nonatomic) <BWDeepFusionProcessorInputDelegate> delegate;
@property (nonatomic) BOOL canProcessEnhancedResolution;
@property (nonatomic) NSDictionary evZeroReferenceFrameAttachments;
@property (nonatomic) {?=qiIq} evZeroReferenceFramePTS;
@property (nonatomic) NSArray providedInferenceAttachedMedia;
@property (nonatomic) BOOL processInferenceInputImage;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)description;
- (id)initWithSettings:portType:processInferenceInputImage:;
- (void)addBuffer:metadata:bufferType:;
- (void)allInferencesDelivered;
- (void)beginProcessingCachedBuffers;
- (void)releaseInputBuffers;
- (id)inputBuffers;
- (id)evZeroReferenceFrameAttachments;
- (void)setEvZeroReferenceFrameAttachments:;
- (id)evZeroReferenceFramePTS;
- (void)setEvZeroReferenceFramePTS:;
- (id)providedInferenceAttachedMedia;
- (void)setProvidedInferenceAttachedMedia:;
- (BOOL)processInferenceInputImage;
- (BOOL)canProcessEnhancedResolution;
- (void)setCanProcessEnhancedResolution:;
@end
