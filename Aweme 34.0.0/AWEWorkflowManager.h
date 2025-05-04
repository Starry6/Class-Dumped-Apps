@interface AWEWorkflowManager : NSObject
@property (nonatomic) NSMutableDictionary domainsInfo;
- (void)stopWorkflowForDomain:;
- (void)addWorkflow:domain:;
- (void)startWorkflowForDomain:;
- (id)workflowFromDomain:;
- (id)domainsInfo;
- (void)setDomainsInfo:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
