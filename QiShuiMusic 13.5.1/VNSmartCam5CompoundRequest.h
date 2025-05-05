@interface VNSmartCam5CompoundRequest : VNCompoundRequest
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:error:;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
@end
