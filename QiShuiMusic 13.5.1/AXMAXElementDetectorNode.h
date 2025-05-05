@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode
@property (nonatomic) AXMindNetDetector mindNetDetector;
@property (nonatomic) AXMindNetDetector clickabilityDetector;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (unsigned long long)maxSupportedFormatVersion;
- (id)mobileAssetType;
- (void)evaluate:metrics:;
- (id)mlModelClasses;
- (id)modelResourceNames;
- (id)contentVersionKey;
- (id)_imageByWipingTextFromRects:image:colorSpace:ciContext:;
- (id)_screenEquivalenceToken:;
- (id)_nonMaxSupression:iouThreshold:;
- (void)_initializeClickabilityModel;
- (void)_initializeMindNetDetector;
- (double)IoUForbb1:bb2:;
- (id)_performCrossClassNMSForDetections:iouThreshold:;
- (void)_initializeIconDetector;
- (void)_evaluateANOD:metrics:;
- (long long)remapUIClassForClickability:andClass:;
- (id)mindNetDetector;
- (id)clickabilityDetector;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
