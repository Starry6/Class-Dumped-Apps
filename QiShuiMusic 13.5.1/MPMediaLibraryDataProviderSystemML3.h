@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
- (BOOL)isGeniusEnabled;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:collectionGroupingType:dataProviderClass:;
- (void)seedPlaylistWithIdentifier:withItemWithIdentifier:completionBlock:;
- (id)initWithLibrary:;
- (id)errorResolverForItem:;
- (void)_seedCloudPlaylistWithTrack:container:completionBlock:;
- (void)releaseGeniusClusterPlaylist:;
- (id)createGeniusClusterPlaylistWithSeedItemIdentifiers:count:error:;
- (void)_initInstanceVariableOnce;
- (void).cxx_destruct;
- (long long)_currentRevision;
- (void)geniusItemsForSeedItem:completion:;
- (id)generateItemIdentifiersForGeniusClusterPlaylist:count:error:;
- (void)updateEntitesToCurrentRevision;
+ (id)_localizedCloudGeniusErrorForError:;
+ (id)_localizedGeniusErrorForError:geniusEnabled:;
@end
