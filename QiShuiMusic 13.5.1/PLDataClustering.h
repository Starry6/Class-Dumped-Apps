@interface PLDataClustering : NSObject
@property (nonatomic) @? distanceBlock;
@property (nonatomic) @? clusterConsolidationBlock;
@property (nonatomic) @? clusterKeyElementBlock;
@property (nonatomic) NSArray numericValueKeypaths;
- (id)performWithDataset:progressBlock:;
- (void).cxx_destruct;
- (id)initWithDistanceBlock:;
- (void)freeDistancesMatrix:forDataset:;
- (id)initWithNumericValueKeypaths:;
- (id)distanceBlock;
- (id)clusterConsolidationBlock;
- (void)setClusterConsolidationBlock:;
- (id)clusterKeyElementBlock;
- (void)setClusterKeyElementBlock:;
- (id)numericValueKeypaths;
- (id)createDistancesMatrixForDataset:;
- (id)createDistancesMatrixForDataset:progressBlock:;
- (id)createDistancesFlatMatrixForDataset:;
- (void)freeDistancesFlatMatrix:;
+ (id)clusteringWithNumericValueKeypaths:;
+ (id)clustering;
+ (id)clusteringWithDistanceBlock:;
@end
