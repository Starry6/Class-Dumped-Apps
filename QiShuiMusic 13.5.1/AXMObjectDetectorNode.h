@interface AXMObjectDetectorNode : AXMEvaluationNode
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (id)possibleObjectClassifications;
@end
