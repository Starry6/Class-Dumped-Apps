@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe
@property (nonatomic) I recipeID;
- (void)setRecipeID:;
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (id)chooseIngredientsFrom:version:;
- (id)sizeForAssetWidth:height:;
- (id)uti;
- (double)_longSideTargetLength;
- (unsigned int)recipeID;
- (id)expectedFileURLForVersion:asset:;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (BOOL)_isAspectShortSizing;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
- (double)_shortSideTargetLength;
@end
