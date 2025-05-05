@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult
@property (nonatomic) {vector<CHFastGroupingCluster fastGroupingClusters;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFastGroupingClusters:clusteredStrokes:strokeProvider:strategyIdentifier:clutterFilter:;
- (id)fastGroupingClusters;
+ (id)_strokeGroupFromSortedStrokeIdentifiers:strokeProvider:strategyIdentifier:;
+ (id)_strokeGroupFromFastGroupingCluster:strokeProvider:strategyIdentifier:;
+ (id)_strokeGroupsFromFastGroupingClusters:clusteredStrokes:strokeProvider:strategyIdentifier:clutterFilter:;
@end
