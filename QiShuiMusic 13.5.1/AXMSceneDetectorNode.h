@interface AXMSceneDetectorNode : AXMEvaluationNode
@property (nonatomic) VNSceneClassificationRequest _sceneClassificationRequest;
@property (nonatomic) I taxonomyOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:;
- (unsigned int)taxonomyOptions;
- (void)setTaxonomyOptions:;
- (id)_sceneClassificationRequest;
- (void)_setSceneClassificationRequest:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (id)possibleSceneClassifications;
@end
