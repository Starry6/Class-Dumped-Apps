@interface IDSCloudKitGroupServer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) IDSCKDatabase database;
- (void)setDatabase:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)database;
- (id)queue;
- (id)initWithDatabase:queue:;
- (void)saveGroup:inContext:completion:;
- (void)fetchGroupWithID:inContext:completion:;
- (void)fetchGroupsWithStableGroupID:inContext:completion:;
- (void)q_groupFromRecord:inContext:completion:;
@end
