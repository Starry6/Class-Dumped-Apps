@interface BDPolicyPipelineManager : NSObject
@property (nonatomic) NSMutableDictionary pipelines;
- (id)getPipelineForCertUnit:;
- (id)getPipelineWithUid:;
- (void)registerPipeline:forPipelineUid:;
- (void)registerPipeline:forSpace:;
- (void)removeAllPipelines;
- (void)removePipelineforPipelineUid:;
- (void)removePipelineforSpace:;
- (id)init;
- (id)pipelines;
- (void).cxx_destruct;
- (void)setPipelines:;
+ (id)sharedInstance;
@end
