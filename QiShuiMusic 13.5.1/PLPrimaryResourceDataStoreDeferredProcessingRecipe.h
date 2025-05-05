@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe
@property (nonatomic) I recipeID;
- (void)setRecipeID:;
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (BOOL)isMarkedFullSize;
- (BOOL)_needsVideoFinalizationForImageAsset:;
- (unsigned int)recipeID;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
@end
