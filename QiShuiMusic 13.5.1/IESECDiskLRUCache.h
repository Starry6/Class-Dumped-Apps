@interface IESECDiskLRUCache : NSObject
@property (nonatomic) Q size;
@property (nonatomic) q maxSize;
- (BOOL)initializeCache;
- (void)writeJournalFileWithData:error:;
- (void)putData:forKey:;
- (id)initWithDirectory:maxSize:;
- (void)openJournalFileHandleLocked;
- (unsigned long long)readJournal;
- (BOOL)readJournalLine:;
- (BOOL)rebuildJournalLocked;
- (BOOL)recoverOrCreateJournalLockedForceRecreation:;
- (BOOL)containsKey:;
- (long long)maxSize;
- (id)dataForKey:;
- (void)enumerateKeysUsingBlock:;
- (void).cxx_destruct;
- (BOOL)removeDataForKey:;
- (id).cxx_construct;
- (unsigned long long)size;
+ (id)cacheWithDirectory:maxSize:;
@end
