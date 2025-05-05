@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy
- (void).cxx_destruct;
- (id)strategyIdentifier;
- (id)initWithStrokeProvider:locales:clutterFilter:;
- (float)_maxDistanceThresholdForTokenizationLevel:;
- (id)_agglomerativeClusteringUsingInitialClusters:distanceMetric:maxDistanceThreshold:shouldCancel:;
- (id)lineGroupingResultUsingStrokes:shouldCancel:;
- (id)fastGroupingResultWithFastGroupingClusters:clusteredStrokes:;
- (id)groupingResultUsingStrokes:distanceMetric:mergingDistanceThreshold:shouldCancel:;
- (id)_wordClustersForInitialClusters:;
- (id)clustersForStrokes:shouldMakeSingleCluster:;
- (void)_filterClusters:usingContextStrokes:clusteredStrokes:;
- (id)groupingResultForContextStrokes:clusteredStrokes:fastGroupingResult:point:tokenizationLevel:;
- (id)_strokeIdentifiersForContextStrokes:clusters:clusteredStrokes:tokenizationLevel:fastGroupingResult:;
@end
