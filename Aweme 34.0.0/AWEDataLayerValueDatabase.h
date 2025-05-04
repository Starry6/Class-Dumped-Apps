@interface AWEDataLayerValueDatabase : AWEDataLayerBaseDatabase
- (void)databaseWillClose;
- (id)buildDeletingDomainsString;
- (void)handleErrorWithCode:message:;
- (BOOL)isDeletingDomain:;
- (void)removeMetadataForKey:domain:;
- (id)createTempCacheIfNeededWithDomain:;
- (void)p_setMetadata:forKey:domain:;
- (void)p_removeMetadataForKey:domain:;
- (void)setDomain:isDeleting:;
- (void)p_removeMetadatasInDomain:;
- (void)p_updateLastReadWithMetadata:forKey:domain:;
- (id)allMetadatas;
- (id)metadataForKey:domain:;
- (void)setMetadata:forKey:domain:;
- (void)removeMetadatasInDomain:;
- (void)removeAllMetadatas;
- (void)updateLastReadWithMetadata:forKey:domain:;
- (void)updateMaxAge:forKey:domain:;
- (id)init;
- (void).cxx_destruct;
+ (id)getValueDatabaseWithUserId:;
@end
