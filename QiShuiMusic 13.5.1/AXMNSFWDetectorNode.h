@interface AXMNSFWDetectorNode : AXMEvaluationNode
- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)addNSFWResultToContext:forIdentifier:confidence:markAsSensitiveCaptionContent:;
@end
