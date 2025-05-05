@interface PLSceneClassification : PLManagedObject
@property (nonatomic) I sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) q packedBoundingBoxRect;
@property (nonatomic) PLAdditionalAssetAttributes assetAttributes;
- (id)debugLogDescription;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:asset:sceneIdentifier:confidence:packedBoundingBoxRect:;
+ (id)PLJunkSceneClassificationIDForLabel:;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:library:completion:;
+ (BOOL)isUtilityAssetForSharedLibrary:;
@end
