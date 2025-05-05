@interface AXMSignificantEventDetectorNode : AXMEvaluationNode
- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)addSignificantEventResultToContext:forIdentifier:confidence:markAsSensitiveCaptionContent:;
@end
