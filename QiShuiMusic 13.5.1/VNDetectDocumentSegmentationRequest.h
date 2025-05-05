@interface VNDetectDocumentSegmentationRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)applicableDetectorTypeForRevision:error:;
+ (id)revisionAvailability;
@end
