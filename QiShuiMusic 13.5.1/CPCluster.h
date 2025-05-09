@interface CPCluster : NSObject
- (id)init;
- (id)initWithProfile:;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (unsigned int)levels;
- (unsigned int)clusterCount;
- (void)computeDifferencesFromData;
- (void)computeDataFromDifferences;
- (void)splitSecondDifferences;
- (void)assembleDifferenceStats;
- (BOOL)joinLevelsFrom:to:;
- (BOOL)joinClosestLevelPairFrom:to:;
- (BOOL)splitLevelAtIndex:betweenValue:andValue:;
- (BOOL)coalesceFrom:to:;
- (void)resetAnalysis;
- (void)analyzeDifferences;
- (void)assembleDataStats;
- (void)setMinimumClusterSize:;
- (void)setMaximumClusterSpread:;
- (void)setMinimumRecognizedInterClusterDifference:;
- (void)setMinimumRecognizedInterLevel2ndDifference:;
- (void)assembleDensityDifferenceStats;
- (void)analyzeDensities;
- (void)findClusters:count:;
- (void)findClustersFromDifferences:count:;
- (void)findDensityClusters:count:;
- (BOOL)applyDifferenceHints:count:;
- (id)clusterStatisticsAtIndex:;
- (id)differenceClusterStatisticsAtIndex:;
- (id)largestClusterStatistics;
- (void)tryLevel0SplitBetween:and:usingHints:;
- (void)findClustersFromCharacterSequence:withSpaceHint:;
- (void)makeWords:count:fromCharacterSequence:charOffset:;
+ (id)createOrderIndexFor:ofSize:;
+ (void)clusterTextLine:withCluster:atLevel:withMaximumWordGap:andMaximumLetterGap:;
+ (void)clusterTextLine:;
+ (void)reclusterTextLine:fromWordIndex:count:;
@end
