@interface VNClustererReadOnlyContext : VNClustererContextBase
- (void).cxx_destruct;
- (id)getDistances:to:error:;
- (id)maximumFaceIdInModelAndReturnError:;
- (id)allClusteredFaceIdsAndReturnError:;
- (id)clusteredFaceIdsForClusterContainingFaceId:error:;
- (id)getAllClustersAndReturnError:;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:error:;
- (id)distanceBetweenClustersWithFaceId:andFaceId:error:;
- (id)distanceBetweenLevel1Clusters:error:;
- (id)suggestionsForClustersWithFaceIds:affinityThreshold:canceller:error:;
- (id)initWithType:cachePath:state:threshold:requestRevision:error:;
- (id)initWithType:cachePath:state:threshold:requestRevision:torsoprintRequestRevision:error:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:error:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:torsoprintRequestRevision:error:;
+ (id)nonGroupedGroupID;
+ (id)clustererModelFileNamesFromState:storedInPath:error:;
+ (id)representativenessForFaces:error:;
+ (id)distanceBetweenFacesWithFaceprint:andFaceprint:error:;
+ (id)distanceBetweenFacesWithFaceObservation:andFaceObservation:error:;
@end
