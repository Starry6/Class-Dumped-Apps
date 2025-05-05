@interface BWInferenceSchedulerGraph : NSObject
- (void)dealloc;
- (void)visitProvidersWithBlock:;
- (id)initWithHeadNode:directedEdges:;
- (void)enumerateVideoDestinationsFromJob:withBlock:;
@end
