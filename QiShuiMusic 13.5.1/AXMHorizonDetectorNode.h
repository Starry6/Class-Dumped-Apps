@interface AXMHorizonDetectorNode : AXMEvaluationNode
@property (nonatomic) VNDetectHorizonRequest _detectHorizonRequest;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (id)_detectHorizonRequest;
- (void)_setDetectHorizonRequest:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
