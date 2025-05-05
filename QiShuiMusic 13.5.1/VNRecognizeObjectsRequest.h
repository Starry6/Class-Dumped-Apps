@interface VNRecognizeObjectsRequest : VNImageBasedRequest
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) BOOL useImageAnalyzerScaling;
@property (nonatomic) float modelMinimumDetectionConfidence;
@property (nonatomic) float modelNonMaximumSuppressionThreshold;
@property (nonatomic) NSArray results;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)supportedIdentifiersAndReturnError:;
- (BOOL)useImageAnalyzerScaling;
- (void)setUseImageAnalyzerScaling:;
- (float)modelMinimumDetectionConfidence;
- (void)setModelMinimumDetectionConfidence:;
- (float)modelNonMaximumSuppressionThreshold;
- (void)setModelNonMaximumSuppressionThreshold:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
+ (id)knownObjectIdentifiersRecognizedByRequestRevision:error:;
@end
