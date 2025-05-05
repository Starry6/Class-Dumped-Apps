@interface VNStatefulRequest : VNImageBasedRequest
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) q minimumLatencyFrameCount;
@property (nonatomic) {?=qiIq} frameAnalysisSpacing;
@property (nonatomic) {?=qiIq} requestFrameAnalysisSpacing;
- (id)requestUUID;
- (id)description;
- (id)initWithFrameAnalysisSpacing:completionHandler:;
- (id)newDefaultRequestInstance;
- (id)frameAnalysisSpacing;
- (long long)minimumLatencyFrameCount;
- (id)requestFrameAnalysisSpacing;
+ (Class)configurationClass;
@end
