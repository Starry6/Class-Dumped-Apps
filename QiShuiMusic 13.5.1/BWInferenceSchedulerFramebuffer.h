@interface BWInferenceSchedulerFramebuffer : NSObject
@property (nonatomic) BWInferenceSchedulerJobList jobs;
@property (nonatomic) BWInferenceSchedulerGraph graph;
- (id)graph;
- (void)dealloc;
- (id)jobs;
- (void)resetJobStatesWithPreventionBlock:;
- (id)initWithGraph:jobList:;
@end
