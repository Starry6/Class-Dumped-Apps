@interface BDCommonABTestExperimentUpdater : NSObject
- (void)handleResponse:completionBlock:;
- (void)fetchABTestExperimentsWithURL:params:completionBlock:;
- (void)fetchABTestExperimentsWithURL:params:headers:completionBlock:;
- (id)modelsWithJsonData:error:;
@end
