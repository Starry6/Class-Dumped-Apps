@interface SNSoundPrintFeatureExtractor : NSObject
@property (nonatomic) {shared_ptr<DSPGraph::Graph>=^{Graph}^{__shared_weak_count}} graph;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)graph;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:error:;
@end
