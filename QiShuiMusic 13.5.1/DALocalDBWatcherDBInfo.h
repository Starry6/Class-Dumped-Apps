@interface DALocalDBWatcherDBInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSInteger lastSavedSequenceNumber;
@property (nonatomic) NSMutableDictionary blocksByConcernedParty;
- (id)path;
- (void)removeBlockForConcernedParty:account:;
- (void)setBlocksByConcernedParty:;
- (id)blocksByConcernedParty;
- (id)allBlocks;
- (int)lastSavedSequenceNumber;
- (void)setLastSavedSequenceNumber:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)addBlock:forConcernedParty:account:;
- (id)allConcernedParties;
@end
