@interface SNSoundClassifier : NSObject
@property (nonatomic) ^v resultsBox;
@property (nonatomic) {shared_ptr<DSPGraph::Graph>=^{Graph}^{__shared_weak_count}} graph;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)graph;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:error:;
- (id)resultsFromBox:renderedWithFrameCount:;
- (id)sharedProcessorConfiguration;
- (id)resultsBox;
- (void)primeGraph;
+ (id)new;
@end
