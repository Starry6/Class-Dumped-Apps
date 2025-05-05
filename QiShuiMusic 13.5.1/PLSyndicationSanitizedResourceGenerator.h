@interface PLSyndicationSanitizedResourceGenerator : NSObject
@property (nonatomic) <PLSyndicationSanitizedResourceGeneratorDelegate> delegate;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)_handleGenerateCompletionWithGenerateError:storedRecipes:sourceMetadata:targetRecipe:assetObjectID:managedObjectContext:timeZoneLookup:error:;
- (void)_generateAndStoreDerivativeResourcesForSyndicationResource:completion:;
- (void)generateAndStoreDerivativeResourcesForSyndicationResource:completion:;
@end
