@interface BMBookmarkStorage : NSObject
- (id)init;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:client:;
- (id)readBookmarkForSubscriptionWithIdentifier:client:error:;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:client:;
- (id)pathForSessionStorageWithIdentifier:client:;
- (void).cxx_destruct;
- (void)writeBookmark:forSubscriptionWithIdentifier:client:;
+ (id)newFileManager;
+ (id)currentSession;
+ (id)sessionsPath;
+ (id)currentSessionPath;
+ (id)persistentPath;
+ (id)basePath;
+ (void)initializeBiomeDSLDirectoryForBootSession;
@end
