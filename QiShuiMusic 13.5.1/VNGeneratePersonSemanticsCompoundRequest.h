@interface VNGeneratePersonSemanticsCompoundRequest : VNCompoundRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)applicableDetectorTypeForRevision:error:;
- (id)initWithOriginalRequests:;
+ (BOOL)warmUpSession:error:;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
+ (long long)compoundRequestRevisionForRequest:;
+ (id)revisionAvailability;
@end
