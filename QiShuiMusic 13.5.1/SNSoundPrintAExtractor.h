@interface SNSoundPrintAExtractor : SNSoundPrintExtractorBase
@property (nonatomic) ^v resultsBox;
@property (nonatomic) I blockSize;
@property (nonatomic) {shared_ptr<DSPGraph::Graph>=^{Graph}^{__shared_weak_count}} graph;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSampleRate:windowDuration:overlapFactor:error:;
+ (id)createWithSampleRate:windowDuration:overlapFactor:error:;
@end
