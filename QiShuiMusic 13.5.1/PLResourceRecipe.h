@interface PLResourceRecipe : NSObject
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (id)chooseIngredientsFrom:version:;
- (BOOL)isMarkedFullSize;
- (unsigned long long)hash;
- (id)uti;
- (BOOL)isDerivative;
- (unsigned int)recipeID;
- (id)expectedFileURLForVersion:asset:;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
- (id)codecFourCharCodeName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)maxPixelCountForAssetWidth:height:;
- (id)expectedSizeFromWidth:height:;
- (unsigned short)recipeClassID;
- (id)recipeErrorWithCode:version:underlyingError:debugDescription:;
- (void)populateAdjustedRecipeIngredients:asset:version:;
+ (id)recipeFromID:;
+ (Class)classFromRecipeID:;
@end
