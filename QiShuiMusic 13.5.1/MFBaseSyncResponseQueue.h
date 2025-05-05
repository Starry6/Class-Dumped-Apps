@interface MFBaseSyncResponseQueue : MFBufferedQueue
- (id)init;
- (void).cxx_destruct;
- (BOOL)handleItems:;
- (unsigned long long)uidForItem:;
- (unsigned long long)flagsForItem:;
- (id)sequenceIdentifierForItem:;
- (BOOL)shouldSyncFlags;
@end
