@interface VNCoreMLRequest : VNImageBasedRequest
@property (nonatomic) VNCoreMLModel model;
@property (nonatomic) Q imageCropAndScaleOption;
- (id)model;
- (id)initWithModel:;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)sequencedRequestPreviousObservationsKey;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)description;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (BOOL)allowsCachingOfResults;
- (id)newDefaultRequestInstance;
- (id)initWithModel:completionHandler:;
+ (Class)configurationClass;
@end
