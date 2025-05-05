@interface VCPClusteringAccuracyMeasures : NSObject
@property (nonatomic) float weightedAveragePrecision;
@property (nonatomic) float weightedAverageRecall;
@property (nonatomic) float numSingletons;
@property (nonatomic) float numValidSingletons;
@property (nonatomic) NSMutableArray precisionPerCluster;
@property (nonatomic) NSMutableArray recallPerPersonToGroundTruth;
@property (nonatomic) NSMutableArray recallPerPersonExcludeMissDetection;
- (id)init;
- (void).cxx_destruct;
- (void)addClusterPrecision:forPersonID:personFaceCount:validFaceCount:identitySize:;
- (void)addIdentityRecallToGroundTruth:forPersonID:personFaceCount:identitySize:;
- (void)addIdentityRecallExcludeMissDetection:forPersonID:personFaceCount:identitySize:;
- (float)weightedAveragePrecision;
- (void)setWeightedAveragePrecision:;
- (float)weightedAverageRecall;
- (void)setWeightedAverageRecall:;
- (float)numSingletons;
- (void)setNumSingletons:;
- (float)numValidSingletons;
- (void)setNumValidSingletons:;
- (id)precisionPerCluster;
- (void)setPrecisionPerCluster:;
- (id)recallPerPersonToGroundTruth;
- (void)setRecallPerPersonToGroundTruth:;
- (id)recallPerPersonExcludeMissDetection;
- (void)setRecallPerPersonExcludeMissDetection:;
@end
