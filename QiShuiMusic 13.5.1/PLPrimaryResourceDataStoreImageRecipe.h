@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe
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
- (id)_resourceGenerationAffectsRecipesForLibraryID:;
- (id)_mediaConversionServiceOptionsForAsset:url:conversionServiceOptions:adjustmentData:largeAdjustmentData:isHighPriority:reason:;
- (BOOL)_storeResourceWithType:version:asset:destURL:error:;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:version:conversionClient:videoConversionClient:conversionServiceOptions:isHighPriority:progress:reason:completion:;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)maxPixelCountForAssetWidth:height:;
- (void)generateAndStoreForAssetWithPriority:version:imageConversionClient:videoConversionClient:isHighPriority:reason:progress:completion:;
- (id)expectedSizeFromWidth:height:;
+ (double)_scaleFactorForInputSize:maximumPixelCount:;
+ (id)scaleOriginalSize:toShortSideTarget:maxLongSideLength:;
+ (id)scaleOriginalSize:toLongSideTarget:;
@end
