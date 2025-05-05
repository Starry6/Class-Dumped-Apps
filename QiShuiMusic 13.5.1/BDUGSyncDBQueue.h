@interface BDUGSyncDBQueue : NSObject
@property (nonatomic) BDUGSyncDBTransaction dbTransaction;
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
- (id)dbTransaction;
- (id)initWithDBTransaction:;
- (void)setDbTransaction:;
- (id)syncQueue;
- (void)setSyncQueue:;
- (BOOL)inTransaction:;
- (void).cxx_destruct;
@end
