@interface AXMPhotoVisionSupport : NSObject
+ (id)_deniedVoiceOverSceneClassificationLabels;
+ (id)_deniedVoiceOverObjectClassificationLabels;
+ (id)processSceneClassifications:withOptions:;
+ (id)localizedLabelForClassificationObservation:;
+ (id)axmTaxonomyNodeForObjectObservation:;
+ (BOOL)axmIsSceneClassId:childOfSceneClassId:;
+ (id)findLeastCommonAncestorForSceneClassIds:withKnownAncestorSceneClassId:;
+ (BOOL)_validatePhotosFormatSoftLinkSymbols;
+ (id)buildTaxonomyDescription;
+ (void)_addNode:toDescription:atLevel:;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)_collectLabelsIncludingLeafNodes:nonLeafNodes:;
+ (id)buildGraphStatisticsDescription;
+ (id)leafNodeLabels;
+ (id)nonLeafNodeLabels;
+ (id)axmTaxonomyNodeForSceneTaxonomyNode:;
@end
