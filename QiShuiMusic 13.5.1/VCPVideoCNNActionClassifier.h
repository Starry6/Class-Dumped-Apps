@interface VCPVideoCNNActionClassifier : VCPVideoCNNTask
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)finishAnalysisPass:;
- (int)run:withPersons:andRegionCrop:atTime:andDuration:;
- (id)initWithPHFaces:;
+ (id)sharedModel:inputNames:properties:;
+ (id)sharedModelStage1:inputNames:properties:;
@end
