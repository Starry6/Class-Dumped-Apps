@interface PLXPCTransaction : NSObject
- (void)dealloc;
- (id)_statusDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)stillAlive;
+ (id)openXPCTransactionStatus;
+ (void)discardCallStackSymbols:;
+ (id)callStackSymbols;
+ (void)_stopTrackingTransaction:;
+ (id)transaction:;
+ (void)_startTrackingTransaction:;
@end
