@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe
- (id)colorSpaceGivenSourceColorSpace:inContext:;
- (id)initWithRecipeID:;
- (id)chooseIngredientsFrom:version:;
- (void)_runNextJob;
- (unsigned int)recipeID;
- (void).cxx_destruct;
- (void)generateAndStoreForAsset:version:imageConversionClient:videoConversionClient:conversionServiceOptions:deferredPhotoFinalizer:progress:reason:completion:;
- (id)codecFourCharCodeName;
- (void)generateAndStoreForAsset:networkAccessAllowed:progress:completion:;
- (void)_handleKeyFrameGeneratedWithSuccess:error:asset:destinationURL:completion:;
- (void)_generateAndStoreForAsset:networkAccessAllowed:progress:completion:;
- (void)_handleJobFinished:withMutatedMoc:error:storedRecipes:affectedRecipes:sourceMetadata:;
+ (void)generateKeyFrameFromVideoURL:time:completion:;
+ (void)generateKeyFrameFromVideoURL:destinationURL:time:completion:;
@end
