@interface VCPPhotosAutoCounterWorker : NSObject
- (id)initWithPhotoLibrary:;
- (void).cxx_destruct;
- (id)_groundTruthURL;
- (int)_loadGroundTruthURL:toGroundTruth:error:;
- (int)_loadGroundTruth:error:;
- (unsigned long long)optInPersonCount;
- (id)_fetchPeopleHomePersons;
- (id)_anonymizedName:;
- (int)_processFetchedFaceGroup:forPersonID:facesPerAsset:assetInformation:extendTimeoutBlock:cancelBlock:;
- (void)_fetchPersonWithIdentifier:facesPerAsset:assetInformation:extendTimeoutBlock:cancelBlock:;
- (BOOL)optInStatus:error:;
- (BOOL)optInPerson:error:extendTimeoutBlock:cancelBlock:;
- (int)exportClustersStates:error:extendTimeoutBlock:cancelBlock:;
- (double)_overlapRatioOf:with:;
- (int)_parseGroundTruthWithURL:faceCountPerPerson:personInformation:faceToPerson:assetToFaces:extendTimeoutBlock:cancelBlock:;
- (void)_exportAssetsToFacesDetails:;
- (int)_measureClusterWithClusterStateURL:groundTruthFaceCountPerPerson:groundTruthPersonInformation:groundTruthFaceToPerson:groundTruthAssetToFaces:measures:extendTimeoutBlock:cancelBlock:;
- (int)_measurePVPersonClusters:groundTruthFaceCountPerPerson:groundTruthPersonInformation:groundTruthFaceToPerson:groundTruthAssetToFaces:measures:extendTimeoutBlock:cancelBlock:;
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:personClusterMeasure:personClusters:andGroundTruthInformation:;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:andPersonClusters:withGroundtruth:results:extendTimeoutBlock:cancelBlock:;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:andPersonClusters:results:extendTimeoutBlock:cancelBlock:;
- (int)_parseSIMLGroundTruthWithURL:faceCountPerPerson:personInformation:faceToPerson:assetToFaces:extendTimeoutBlock:cancelBlock:;
- (int)validateClusterAccuracyWithSIMLGroundtruth:results:extendTimeoutBlock:cancelBlock:;
+ (id)workerWithPhotoLibrary:;
+ (BOOL)_dumpFaceprint;
+ (BOOL)_dumpAssetsToFaces;
@end
