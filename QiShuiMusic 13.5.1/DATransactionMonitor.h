@interface DATransactionMonitor : NSObject
@property (nonatomic) NSInteger transactionCount;
@property (nonatomic) NSMutableArray transactions;
@property (nonatomic) <DATransactionMonitorDelegate> transactionMonitorDelegate;
- (int)transactionCount;
- (id)init;
- (void)setTransactionCount:;
- (void)setTransactions:;
- (id)transactions;
- (void).cxx_destruct;
- (void)incrementTransactionCountForTransaction:;
- (void)decrementTransactionCountForTransaction:;
- (id)transactionMonitorDelegate;
- (void)setTransactionMonitorDelegate:;
+ (id)sharedTransactionMonitor;
@end
