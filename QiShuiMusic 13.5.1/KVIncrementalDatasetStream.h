@interface KVIncrementalDatasetStream : KVDatasetStream
- (unsigned long long)priorVersion;
- (BOOL)addOrUpdateItem:error:;
- (BOOL)removeItemWithItemId:error:;
@end
