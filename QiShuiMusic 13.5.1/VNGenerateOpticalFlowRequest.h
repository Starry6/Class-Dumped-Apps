@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest
@property (nonatomic) Q computationAccuracy;
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) BOOL keepNetworkOutput;
@property (nonatomic) NSArray results;
- (void)setOutputPixelFormat:;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (unsigned int)outputPixelFormat;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
- (BOOL)_internalPerformRevision:inContext:previousObservation:error:;
- (id)_createGeneratorOptionsForRequestRevision:session:images:previousTargetImageIsCurrentRefImage:previousObservation:;
- (unsigned long long)computationAccuracy;
- (void)setComputationAccuracy:;
- (BOOL)keepNetworkOutput;
- (void)setKeepNetworkOutput:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
