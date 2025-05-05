@interface ARRenderSyncSchedulerBlockWrapper : NSObject
@property (nonatomic) NSDate entryTimestamp;
@property (nonatomic) @? block;
- (id)block;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)entryTimestamp;
- (void)setEntryTimestamp:;
@end
