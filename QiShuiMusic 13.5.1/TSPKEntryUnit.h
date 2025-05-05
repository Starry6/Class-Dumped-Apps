@interface TSPKEntryUnit : NSObject
@property (nonatomic) BOOL entryInit;
@property (nonatomic) BOOL entryEnable;
@property (nonatomic) TSPKEntryUnitModel model;
@property (nonatomic) NSString entryType;
- (void)setEntryEnable:;
- (id)broadcastWithEventType:event:;
- (id)createEventDataWithModel:;
- (BOOL)entryEnable;
- (BOOL)entryInit;
- (id)handleAccessEntry:;
- (id)parseBPEAContext;
- (void)saveAccessEntry:;
- (void)setEntryInit:;
- (id)storeIdentifierForModel:;
- (id)model;
- (id)entryType;
- (void)setModel:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setEntryType:;
@end
