@interface MFSearchResponseQueue : MFBaseSyncResponseQueue
@property (nonatomic) NSIndexSet indexSet;
- (BOOL)addItem:;
- (id)init;
- (void)dealloc;
- (BOOL)flush;
- (void).cxx_destruct;
- (id)indexSet;
- (unsigned long long)uidForItem:;
- (unsigned long long)flagsForItem:;
@end
