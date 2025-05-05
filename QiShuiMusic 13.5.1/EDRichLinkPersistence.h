@interface EDRichLinkPersistence : NSObject
@property (nonatomic) EDPersistenceDatabase database;
- (id)initWithDatabase:;
- (void)setDatabase:;
- (void).cxx_destruct;
- (id)database;
- (id)saveRichLinkData:globalMessageID:basePath:;
- (id)saveRichLinkData:url:title:globalMessageID:basePath:;
- (id)richLinkDataForPersistentID:basePath:;
- (id)datasForPersistentIDs:basePath:;
- (id)richLinkPersistentIDsForGlobalMessageID:;
- (id)_hashForRichLinkData:;
- (id)_richLinkDirectoryURLWithBasePath:;
- (id)_richLinkFileURLWithID:basePath:;
- (id)richLinkFileURLWithID:basePath:;
- (id)richLinkMetadataDataForPersistentID:basePath:;
- (BOOL)verifyFileExistsForRichLinkID:basePath:;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
+ (id)richLinksTableSchema;
+ (id)messagesRichLinksTableSchema;
+ (id)richLinksTableName;
+ (id)messageRichLinksTableName;
@end
