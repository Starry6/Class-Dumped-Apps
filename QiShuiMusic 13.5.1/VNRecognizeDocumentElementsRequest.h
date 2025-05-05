@interface VNRecognizeDocumentElementsRequest : VNImageBasedRequest
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration documentElements;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration textElements;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration machineReadableCodeElements;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)supportedIdentifiersAndReturnError:;
- (id)documentElements;
- (id)textElements;
- (id)machineReadableCodeElements;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
