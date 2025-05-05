@interface BDUGSyncDBProvider : NSObject
@property (nonatomic) BDUGSyncDBQueue dbQueue;
- (id)init;
- (BOOL)inTransaction:;
- (void).cxx_destruct;
- (id)dbQueue;
- (void)setDbQueue:;
+ (id)sharedProvider;
@end
