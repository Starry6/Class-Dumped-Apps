@interface VKCaptureTextFeedbackAssetProvider : NSObject
@property (nonatomic) VKCaptureTextAnalysisRequest request;
@property (nonatomic) VKCaptureTextDetectionResult detectionResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)request;
- (void).cxx_destruct;
- (id)detectionResult;
- (BOOL)saveAssetsToFeedbackAttachmentsFolder:error:;
- (id)initWithRequest:detectionResult:;
@end
