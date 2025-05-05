@interface PHAssetLibraryScopeProperties : PHAssetPropertySet
@property (nonatomic) q pl_shareState;
@property (nonatomic) s suggestedByClientType;
@property (nonatomic) BOOL assetIsInOnboardingPreviewState;
@property (nonatomic) BOOL assetIsInPhotosSuggestedPreviewState;
@property (nonatomic) BOOL assetIsPublishedToLibraryScope;
@property (nonatomic) BOOL assetManuallyAddedByUser;
@property (nonatomic) BOOL assetManuallyRejectedByUser;
@property (nonatomic) BOOL assetRejectedByCamera;
@property (nonatomic) BOOL assetRejectedByPhotosSuggester;
- (id)initWithFetchDictionary:asset:prefetched:;
- (short)suggestedByClientType;
- (BOOL)assetIsInOnboardingPreviewState;
- (BOOL)assetIsInPhotosSuggestedPreviewState;
- (BOOL)assetIsPublishedToLibraryScope;
- (BOOL)assetManuallyAddedByUser;
- (BOOL)assetManuallyRejectedByUser;
- (BOOL)assetRejectedByCamera;
- (BOOL)assetRejectedByPhotosSuggester;
- (long long)pl_shareState;
- (void)setPl_shareState:;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
