@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder
@property (nonatomic) BOOL shouldUsePlaylistEntry;
- (void)setPreventStoreItemMetadataCaching:;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:;
- (id)modelObjectWithStoreItemMetadata:sourceModelObject:userIdentity:;
- (BOOL)shouldUsePlaylistEntry;
- (void).cxx_destruct;
- (void)setShouldUsePlaylistEntry:;
@end
