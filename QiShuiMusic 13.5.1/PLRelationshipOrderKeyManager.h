@interface PLRelationshipOrderKeyManager : NSObject
@property (nonatomic) BOOL inWriteStashedLocationMode;
@property (nonatomic) @? generateContextBlock;
@property (nonatomic) BOOL hasStashedLocationValues;
@property (nonatomic) BOOL conflictDetected;
- (void)migration_ensureValidOrderKey:usingOrderValuePropertyKey:;
- (id)init;
- (id)_locked_enqueuedFolderAlbumsOrderValueUpdates;
- (id)albumsAndOrderValuesForAsset:inManagedObjectContext:;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:albums:conflictDetected:;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:inLibrary:;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:;
- (unsigned long long)findIndexForAssetWithID:newOrderValue:inAlbumWithID:hasOrderValueConflictWithAssetID:inContext:;
- (void)stashFolderAlbumsLocationValue:forAlbumWithID:inFolderWithID:atIndex:;
- (id)objectIDsAndOrderValuesForRelationship:onObjectWithID:invalidateCache:inContext:;
- (void)_setConflictDetected:;
- (void)setGenerateContextBlock:;
- (void)getConflictResolutionOrderValuesForRelationship:onObjectWithID:atIndex:intoLower:higher:inContext:;
- (id)initWithGenerateContextBlock:;
- (id)_orderingStateForRelationship:onObjectWithID:usingSPISafeContext:;
- (id)_locked_enqueuedAlbumAssetsOrderValueUpdates;
- (BOOL)inWriteStashedLocationMode;
- (void)setInWriteStashedLocationMode:;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:childToOrderKeyMap:;
- (id)_locked_locationsCache;
- (id)migration_sortedOrderKeysForAssetsInAlbum:usingMap:;
- (id)parentFolderOrderValueForAlbum:inManagedObjectContext:;
- (void).cxx_destruct;
- (unsigned long long)findIndexForAlbumWithID:newOrderValue:inFolderWithID:hasOrderValueConflictWithAlbumID:inContext:;
- (void)stashAlbumAssetsLocationValue:forAssetWithID:inAlbumWithID:atIndex:;
- (BOOL)conflictDetected;
- (void)_stashLocationValue:forOrderedObjectWithID:inSourceObjectID:relationship:atIndex:usingStashDictionary:usingSPISafeContext:;
- (BOOL)writeStashedLocationValuesInContext:error:;
- (void)_updateOrderOfChildrenInParent:usingTransientOrders:;
- (BOOL)hasStashedLocationValues;
- (id)_orderingStateForRelationship:onObjectWithID:invalidateCache:usingSPISafeContext:;
- (id)generateContextBlock;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:managedObjectContext:;
- (void)_migration_updateOrderValuesForAssetsInAlbum:managedObjectContext:;
- (void)updateKeyAssetsForAlbums:inLibrary:completionHandler:;
- (void)migration_fixupOrderKeys:usingOrderValuePropertyKey:enforceSingletonAlbumReservedKeySpace:;
+ (id)new;
+ (long long)compareOrderKeyObject:withObject:;
@end
