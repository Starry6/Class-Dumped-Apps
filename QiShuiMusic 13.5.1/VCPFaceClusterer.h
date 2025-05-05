@interface VCPFaceClusterer : NSObject
- (BOOL)resetFaceClusteringState:;
- (void).cxx_destruct;
- (int)clusterFaces;
- (unsigned long long)clustererState;
- (id)initWithPhotoLibrary:context:cancelOrExtendTimeoutBlock:;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:;
- (unsigned long long)numberOfFacesPendingClustering;
- (BOOL)getFaceClusters:clusteringThreshold:utilizingGPU:cancelOrExtendTimeoutBlock:error:;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (id)clusterer;
- (BOOL)_resetFaceClusteringState:;
- (BOOL)reclusterFacesWithThreshold:shouldRecluster:error:;
- (int)clusterFacesIfNecessary;
@end
