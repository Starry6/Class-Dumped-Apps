@interface IDSCloudKitKeyElectionStore : NSObject
@property (nonatomic) IDSCKDatabase database;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)setDatabase:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)database;
- (id)queue;
- (id)_recordID;
- (id)initWithDatabase:queue:;
- (void)fetchAccountIdentityItemWithCompletion:;
- (void)removeAccountIdentityItemWithCompletion:;
- (void)storeAccountIdentityItem:withCompletion:;
- (id)_itemFromRecord:error:;
- (id)_recordFromItem:;
+ (BOOL)isItemNotFoundError:;
@end
