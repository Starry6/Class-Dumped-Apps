@interface PLManagedAlbum : _PLManagedAlbum
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) NSOrderedSet assets;
@property (nonatomic) NSSet assetOrders;
@property (nonatomic) s searchIndexRebuildState;
@property (nonatomic) NSMutableOrderedSet userEditableAssets;
@property (nonatomic) NSMutableOrderedSet mutableAssets;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSInteger kindValue;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (nonatomic) NSString name;
@property (nonatomic) NSObject posterImage;
@property (nonatomic) BOOL isLibrary;
@property (nonatomic) BOOL isCameraAlbum;
@property (nonatomic) BOOL isPanoramasAlbum;
@property (nonatomic) BOOL isPhotoStreamAlbum;
@property (nonatomic) BOOL isCloudSharedAlbum;
@property (nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (nonatomic) BOOL isStandInAlbum;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) BOOL isInTrash;
@property (nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (nonatomic) BOOL isRecentlyAddedAlbum;
@property (nonatomic) BOOL isUserLibraryAlbum;
@property (nonatomic) BOOL isProjectAlbum;
@property (nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (nonatomic) BOOL shouldDeleteWhenEmpty;
@property (nonatomic) NSString importSessionID;
@property (nonatomic) NSURL groupURL;
@property (nonatomic) @? sortingComparator;
@property (nonatomic) NSInteger pendingItemsCount;
@property (nonatomic) NSInteger pendingItemsType;
@property (nonatomic) Q batchSize;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString title;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) Q approximateCount;
@property (nonatomic) Q assetsCount;
@property (nonatomic) Q photosCount;
@property (nonatomic) Q videosCount;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) PLManagedAsset keyAsset;
@property (nonatomic) PLManagedAsset secondaryKeyAsset;
@property (nonatomic) PLManagedAsset tertiaryKeyAsset;
@property (nonatomic) BOOL canShowComments;
@property (nonatomic) BOOL canShowAvalancheStacks;
@property (nonatomic) NSArray localizedLocationNames;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) s cloudDeleteState;
@property (nonatomic) q cloudDeletionType;
@property (nonatomic) NSString cloudUUIDForDeletion;
- (id)_expectedKeyAssets:;
- (BOOL)isValidForPersistence;
- (unsigned long long)videosCount;
- (id)childKeyForOrdering;
- (void)replaceAssetsAtIndexes:withAssets:;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:;
- (void)recalculateCachedCounts;
- (id)descriptionOfAssetOrderValues;
- (id)filteredIndexesForPredicate:;
- (BOOL)isEmpty;
- (void)didSave;
- (unsigned long long)photosCount;
- (void)persistMetadataToFileSystemWithPathManager:;
- (void)willSave;
- (BOOL)supportsAssetOrderKeys;
- (void)setNeedsPersistenceUpdate:;
- (id)_keysToBeObserved;
- (id)objectInInternalUserEditableAssetsAtIndex:;
- (void)addAssetUsingiTunesAlbumOrder:;
- (void)insertInternalUserEditableAssets:atIndexes:customExportsInfo:trimmedVideoPathInfo:commentText:;
- (BOOL)albumShouldBeAutomaticallyDeleted;
- (void)setAlbumShouldBeAutomaticallyDeleted:;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:;
- (void)registerForChanges;
- (void)insertAssets:atIndexes:;
- (id)userEditableAssets;
- (id)mutableAssets;
- (void)insertInternalUserEditableAssets:atIndexes:;
- (void)removeAssetsAtIndexes:;
- (id)internalUserEditableAssetsAtIndexes:;
- (id)cloudUUIDForDeletion;
- (id)payloadForChangedKeys:;
- (BOOL)canPerformEditOperation:;
- (id)assetOrderByAbumUUIDs;
- (BOOL)canPerformDeleteOperation;
- (long long)cloudDeletionType;
- (unsigned long long)_albumStandInCount;
- (void)prepareForDeletion;
- (void)unregisterForChanges;
- (BOOL)needsPersistenceUpdate;
- (id)_orderComparisonValueForAsset:iTunesLookupOrder:;
- (void)_updateKeyAssetsIfNeeded:;
- (void)removeInternalUserEditableAssetsAtIndexes:;
- (id)_assetOrderByAssetUUID;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (unsigned long long)countOfInternalUserEditableAssets;
- (unsigned long long)approximateCount;
- (void)updateKeyAssetsIfNeeded;
- (void)removePersistedFileSystemDataWithPathManager:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (unsigned long long)assetsCount;
+ (id)childKeyForOrdering;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)cloudUUIDKeyForDeletion;
+ (void)clearAssetOrderByAbumUUIDs;
+ (id)validKindsForPersistence;
+ (long long)cloudDeletionTypeForTombstone:;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
@end
