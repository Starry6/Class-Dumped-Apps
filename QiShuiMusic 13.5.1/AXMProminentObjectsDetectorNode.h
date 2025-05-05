@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode
@property (nonatomic) VNGenerateAttentionBasedSaliencyImageRequest _imageSaliencyRequest;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (id)_imageSaliencyRequest;
- (void)set_imageSaliencyRequest:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
