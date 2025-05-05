@interface VNTrackHomographyRequest : VNStatefulRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:error:;
- (id)initWithFrameAnalysisSpacing:completionHandler:;
- (BOOL)allowsCachingOfResults;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
