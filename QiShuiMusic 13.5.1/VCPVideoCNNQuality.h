@interface VCPVideoCNNQuality : VCPVideoCNNTask
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (int)finishAnalysisPass:;
- (int)run:withPersons:andRegionCrop:atTime:andDuration:;
@end
