@interface BWEspressoInferenceContext : NSObject
@property (nonatomic) NSInteger executionTarget;
@property (nonatomic) ^v espressoContext;
@property (nonatomic) BOOL prepared;
- (int)executionTarget;
- (void)dealloc;
- (id)initWithExecutionTarget:shareIntermediateBuffer:;
- (BOOL)isPrepared;
- (int)configureIntermediateBufferSharingForPlanPostbuild:;
- (int)configureIntermediateBufferSharingForPlanPrebuild:;
- (id)initWithExecutionTarget:;
- (int)prepareForInferenceUsingProcessingSession:;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:;
- (id)description;
- (id)espressoContext;
@end
