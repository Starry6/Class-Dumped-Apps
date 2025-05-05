@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe
@property (nonatomic) I recipeID;
- (void)setRecipeID:;
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (id)chooseIngredientsFrom:version:;
- (BOOL)isMarkedFullSize;
- (id)uti;
- (unsigned int)recipeID;
- (id)expectedFileURLForVersion:asset:;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
- (id)codecFourCharCodeName;
- (void)generateAndStoreForAssetWithPriority:version:imageConversionClient:videoConversionClient:isHighPriority:reason:progress:completion:;
- (id)_mediaConversionServiceOptionsForAsset:conversionServiceOptions:adjustmentData:largeAdjustmentData:isHighPriority:reason:;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:version:conversionClient:conversionServiceOptions:isHighPriority:progress:reason:completion:;
@end
