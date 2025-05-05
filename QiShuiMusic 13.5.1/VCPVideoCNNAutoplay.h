@interface VCPVideoCNNAutoplay : VCPVideoCNNTask
- (int)run:;
- (id)init;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)finishAnalysisPass:;
- (int)loadAnalysisResults:audioResults:;
@end
