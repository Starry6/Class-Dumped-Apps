@interface VCPVideoCNNTask : NSObject
- (int)run:;
- (id)results;
- (int)finishAnalysisPass:;
- (int)run:withPersons:andRegionCrop:atTime:andDuration:;
@end
