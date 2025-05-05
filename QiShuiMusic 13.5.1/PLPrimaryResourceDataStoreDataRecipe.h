@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe
@property (nonatomic) I recipeID;
- (void)setRecipeID:;
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (id)chooseIngredientsFrom:version:;
- (id)uti;
- (unsigned int)recipeID;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
- (id)codecFourCharCodeName;
@end
