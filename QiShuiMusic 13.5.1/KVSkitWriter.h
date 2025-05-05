@interface KVSkitWriter : NSObject
@property (nonatomic) Q flushThreshold;
- (BOOL)clearWithError:;
- (BOOL)_beginTransactionWithError:;
- (id)init;
- (unsigned long long)flushThreshold;
- (long long)_indexLocale;
- (BOOL)rollbackChanges:;
- (BOOL)shouldMerge:error:;
- (BOOL)commitChanges:error:;
- (id)initWithSkitDirectoryURL:dataProtectionClass:flushThreshold:;
- (long long)indexLocale;
- (BOOL)removeVocabularyItemWithRecordId:error:;
- (BOOL)addVocabularyItemWithBuffer:originAppId:recordId:error:;
- (BOOL)_loadLocaleWithError:;
- (void)_resetTransactionSate;
- (void).cxx_destruct;
- (BOOL)_saveLocaleWithError:;
- (BOOL)isSupportedItemType:;
- (BOOL)setTransactionLocale:assetPath:error:;
- (id).cxx_construct;
- (BOOL)cleanup:;
@end
