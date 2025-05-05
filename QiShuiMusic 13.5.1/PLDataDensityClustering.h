@interface PLDataDensityClustering : PLDataClustering
@property (nonatomic) double maximumDistance;
@property (nonatomic) Q minimumNumberOfObjects;
- (id)init;
- (void)setMaximumDistance:;
- (double)maximumDistance;
- (void)setMinimumNumberOfObjects:;
- (unsigned long long)minimumNumberOfObjects;
@end
