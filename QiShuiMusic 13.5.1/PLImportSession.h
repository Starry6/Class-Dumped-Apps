@interface PLImportSession : PLGenericAlbum
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (nonatomic) NSSet assets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidForPersistence;
- (BOOL)isEmpty;
- (void)didSave;
- (void)persistMetadataToFileSystemWithPathManager:;
- (void)willSave;
- (void)setNeedsPersistenceUpdate:;
- (BOOL)albumShouldBeAutomaticallyDeleted;
- (void)setAlbumShouldBeAutomaticallyDeleted:;
- (id)mutableAssets;
- (id)payloadForChangedKeys:;
- (BOOL)canPerformEditOperation:;
- (void)prepareForDeletion;
- (BOOL)needsPersistenceUpdate;
- (void)removePersistedFileSystemDataWithPathManager:;
- (unsigned long long)count;
- (void)_updateStartDate:;
- (void)_updateEndDate:;
- (void)revalidateImportDates;
- (void)updateImportDatesFromAddedAsset:;
- (BOOL)_isAssetIncludedInImportDates:;
- (BOOL)_isDateBeforeStartDate:;
- (BOOL)_isDateAfterEndDate:;
- (id)_orderedBatchedAssets;
- (BOOL)validForPersistenceChangedForChangedKeys:;
+ (id)entityName;
+ (id)validKindsForPersistence;
+ (id)insertNewImportSessionAlbumWithImportSessionID:inManagedObjectContext:;
+ (id)albumsWithImportSessionIDs:inManagedObjectContext:;
+ (id)albumWithImportSessionID:inManagedObjectContext:;
@end
