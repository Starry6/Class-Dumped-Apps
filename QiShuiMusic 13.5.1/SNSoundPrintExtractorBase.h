@interface SNSoundPrintExtractorBase : NSObject
@property (nonatomic) ^v resultsBox;
@property (nonatomic) I blockSize;
@property (nonatomic) {shared_ptr<DSPGraph::Graph>=^{Graph}^{__shared_weak_count}} graph;
- (id)graph;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (id).cxx_construct;
- (id)resultsBox;
- (id)initWithSoundPrintModel:sampleRate:windowDuration:overlapFactor:error:;
+ (unsigned int)sampleRate;
+ (id)windowDurationConstraint;
+ (id)defaultWindowDuration;
+ (id)resultsBoxName;
@end
