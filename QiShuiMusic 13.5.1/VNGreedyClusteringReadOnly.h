@interface VNGreedyClusteringReadOnly : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)suggestionsForClusterIdsWithFlags:affinityThreshold:error:;
- (id)getClusterState:;
- (id)getClusteredIds:;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:error:;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:andFaceId:error:;
- (id)getDistanceBetweenLevel1Clusters:error:;
- (id)getAllClustersFromStateAndReturnError:;
- (id)getClustersForClusterIds:options:error:;
- (id)getDistances:to:error:;
- (id)maximumFaceIdInModelAndReturnError:;
- (BOOL)cancelClustering:;
- (BOOL)_parseOptions:error:;
- (void)initializeLogging;
- (id)initWithOptions:error:;
- (void)setGreedyClustererFaces_const:;
- (id)convertUpdatePairsToClusters:;
- (id)getLevel0ClusteredIdsForFaceId:error:;
+ (id)nonGroupedGroupID;
+ (void)addFaceObservations:toFaceDescriptorBuffer:;
+ (void)addFaceObservations:withGroupingIdentifiers:toFaceDescriptorBuffer:;
+ (void)addPersonData:withGroupingIdentifiers:toFaceDescriptorBuffer:;
+ (id)getRepresentativenessForFaces:error:;
+ (id)clustererModelFileNamesFromState:storedInPath:error:;
@end
