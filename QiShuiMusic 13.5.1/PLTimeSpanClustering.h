@interface PLTimeSpanClustering : PLDataClustering
@property (nonatomic) Q averageNumberOfObjects;
@property (nonatomic) double minimumSpan;
- (id)init;
- (id)performWithDataset:progressBlock:;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:inDataset:;
- (unsigned long long)averageNumberOfObjects;
- (void)setAverageNumberOfObjects:;
- (double)minimumSpan;
- (void)setMinimumSpan:;
@end
