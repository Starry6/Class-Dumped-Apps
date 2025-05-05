@interface SNVGGishExtractor : NSObject
@property (nonatomic) ^v resultsBox;
@property (nonatomic) I blockSize;
@property (nonatomic) {shared_ptr<DSPGraph::Graph>=^{Graph}^{__shared_weak_count}} graph;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)graph;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (id).cxx_construct;
- (id)resultsBox;
- (id)initWithOverlapFactor:error:;
+ (unsigned int)sampleRate;
+ (id)windowDurationConstraint;
+ (id)createWithSampleRate:windowDuration:overlapFactor:error:;
+ (id)defaultWindowDuration;
+ (id)resultsBoxName;
@end
