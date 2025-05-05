@interface VCPVideoCNNHighlight : VCPVideoCNNTask
- (id)init;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)finishAnalysisPass:;
- (int)run:withPersons:andRegionCrop:atTime:andDuration:;
- (int)loadAnalysisResults:;
@end
