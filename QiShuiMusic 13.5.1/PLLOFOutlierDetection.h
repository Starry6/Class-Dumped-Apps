@interface PLLOFOutlierDetection : NSObject
@property (nonatomic) Q k;
@property (nonatomic) BOOL filterZeroDistanceDataset;
- (id)init;
- (unsigned long long)k;
- (void)setK:;
- (id)filteredObjectsWithDataset:distanceBlock:;
- (id)createKNNMatrixWithDistanceMatrix:size:;
- (id)createDistancesMatrixForDataset:distanceBlock:;
- (void)freeDistancesMatrix:forDataset:;
- (id)lofScoresWithDataset:distanceBlock:;
- (BOOL)filterZeroDistanceDataset;
- (void)setFilterZeroDistanceDataset:;
@end
