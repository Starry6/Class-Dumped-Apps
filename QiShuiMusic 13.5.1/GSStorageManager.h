@interface GSStorageManager : NSObject
- (BOOL)removeTemporaryStorage:error:;
- (id)temporaryStorageForItemAtURL:locatedAtURL:error:;
- (BOOL)isPermanentStorageSupportedAtURL:error:;
- (id)persistentIdentifierInStorage:forAdditionNamed:inNameSpace:;
- (id)permanentStorageForItemAtURL:allocateIfNone:error:;
- (id)additionForItemAtURL:forPersistentIdentifier:error:;
- (BOOL)isItemAtURLInsidePermanentStorage:error:;
- (BOOL)mayPermanentStorageBeSupportedAtURL:error:;
- (BOOL)deallocateDocumentIDOfItemAtURL:error:;
- (void)_connectionWithDaemonWasLost;
- (BOOL)mayPermanentStorageBeSupportedWithFD:error:;
- (id)stagingPrefixForDocumentID:;
- (BOOL)isItemAtURLValidInsidePermanentStorage:error:;
+ (id)manager;
+ (BOOL)_isPermanentStorageSupportedForStatFSInfo:error:;
+ (BOOL)_isPermanentStorageSupportedForFD:error:;
@end
