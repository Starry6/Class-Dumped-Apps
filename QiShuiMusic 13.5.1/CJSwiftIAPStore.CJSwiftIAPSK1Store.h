@interface CJSwiftIAPStore.CJSwiftIAPSK1Store : NSObject
- (void)paymentQueue:updatedTransactions:;
- (void)paymentQueue:restoreCompletedTransactionsFailedWithError:;
- (void)paymentQueueRestoreCompletedTransactionsFinished:;
- (BOOL)paymentQueue:shouldAddStorePayment:forProduct:;
- (id)init;
- (void).cxx_destruct;
@end
