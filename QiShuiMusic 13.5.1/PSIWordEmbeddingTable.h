@interface PSIWordEmbeddingTable : PSITable
- (void)finalizze;
- (void)cacheSearchableStatements;
- (id)wordEmbeddingsForToken:;
- (id)wordEmbeddingVersion;
- (void)insertWord:synonyms:;
- (id)dumpWordEmbeddingTable;
- (id)matchesForToken:;
- (void)clear;
- (void).cxx_destruct;
- (void)removeWord:;
- (BOOL)isInsertedWithWord:;
- (void)cacheWritableStatements;
- (id)initWithDelegate:searchable:writable:locale:;
@end
