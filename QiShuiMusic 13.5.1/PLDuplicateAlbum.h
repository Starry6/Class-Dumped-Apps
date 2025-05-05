@interface PLDuplicateAlbum : PLManagedAlbum
@property (nonatomic) q processingVersion;
@property (nonatomic) s duplicateType;
@property (nonatomic) NSSet metadataMatchingAssets;
@property (nonatomic) NSSet perceptualMatchingAssets;
- (BOOL)supportsAssetOrderKeys;
- (void)removeInternalAssets:;
- (void)removeAssetsAtIndexes:;
- (id)duplicateAssetsFromCollection;
- (void)awakeFromInsert;
- (void)addAssets:type:;
- (void)sortAssets;
- (id)mutableMetadataMatchingAssets;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:;
- (id)mutablePerceptualMatchingAssets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:duplicateAssetVisibilityState:;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)updateAlbumType;
- (id)albumAssetsFetchRequestForDuplicateSort;
+ (id)entityName;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)insertIntoPhotoLibrary:;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:type:;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:predicate:;
@end
