@interface PHCPAnalyticsMediaPropertyProvider : NSObject
@property (nonatomic) PHPhotoLibrary photoLibrary;
@property (nonatomic) PFSceneTaxonomy sceneTaxonomy33;
@property (nonatomic) PFSceneTaxonomy sceneTaxonomy84;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:;
- (id)init;
- (id)getDynamicProperty:forEventName:payloadForSystemPropertyExtraction:;
- (id)_sdConfidenceThresholdVersion51ForIdentifier:;
- (BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:sceneAnalysisVersion:;
- (void)setSceneTaxonomy33:;
- (id)_PHAssetFromPayload:;
- (BOOL)_isPeopleSceneIdentifier:;
- (BOOL)_hasPetsForSceneClassifications:sceneAnalysisVersion:;
- (id)_junkConfidenceThresholdVersion40ForIdentifier:;
- (id)sceneTaxonomy33;
- (id)_mediaProperty:forAsset:;
- (id)_mediaProperty:forAssetCollection:;
- (id)_ageDescriptionForMediaDate:;
- (id)_sceneLabelByClassificationIdentifier:;
- (id)_junkConfidenceThresholdVersion81ForIdentifier:;
- (void)setSceneTaxonomy84:;
- (id)_junkConfidenceThresholdForIdentifier:sceneAnalysisVersion:;
- (id)_sdConfidenceThresholdForIdentifier:sceneAnalysisVersion:;
- (BOOL)_hasPeopleForSceneClassifications:sceneAnalysisVersion:;
- (id)_sdConfidenceThresholdVersion33ForIdentifier:;
- (void).cxx_destruct;
- (id)_sceneConfidenceThresholdByClassificationIdentifier:sceneAnalysisVersion:;
- (id)_sceneSubjectForAsset:;
- (id)sceneTaxonomy84;
- (id)_sceneNetLabelConfidenceForIdentifier:sceneAnalysisVersion:;
- (void)registerSystemProperties:;
- (id)_cameraTypeFromImportSource:;
- (id)_sceneForAsset:;
- (id)_mediaCountFromPayload:;
- (id)_PHAssetCollectionFromPayload:;
+ (id)assetPropertySetsToFetch;
+ (id)_wellKnownPhotoLibraryIdentifierDescription:;
+ (id)_syndicationValueDescriptionForAssetProcessingValue:;
+ (id)_syndicationStateDescriptionForSyndicationState:;
@end
