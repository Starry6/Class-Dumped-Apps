@interface EDTransactionService : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)setServiceName:;
- (id)serviceName;
- (id)serialQueue;
- (id)startTransaction;
- (BOOL)hasPendingTransactions;
- (void)resetPendingTransactions;
- (void).cxx_destruct;
- (id)initWithServiceName:;
- (void)setSerialQueue:;
- (void)endTransaction:;
@end
