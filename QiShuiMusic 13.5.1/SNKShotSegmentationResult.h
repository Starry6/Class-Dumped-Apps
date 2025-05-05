@interface SNKShotSegmentationResult : NSObject
@property (nonatomic) MLMultiArray exemplarEmbedding;
@property (nonatomic) NSArray segments;
@property (nonatomic) NSNumber exemplarIndex;
- (id)segments;
- (void)setSegments:;
- (void).cxx_destruct;
- (id)exemplarEmbedding;
- (void)setExemplarEmbedding:;
- (id)exemplarIndex;
- (void)setExemplarIndex:;
@end
