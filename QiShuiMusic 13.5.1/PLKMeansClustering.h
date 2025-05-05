@interface PLKMeansClustering : PLDataClustering
@property (nonatomic) Q k;
- (unsigned long long)k;
- (id)performWithDataset:progressBlock:;
- (void)setK:;
- (id)performWithDataset:numericData:progressBlock:;
- (id)_performWithDataset:numericData:progressBlock:;
- (id)_dataArray:featureCount:useKeypaths:;
@end
