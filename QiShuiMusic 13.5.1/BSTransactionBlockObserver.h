@interface BSTransactionBlockObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transactionDidComplete:;
- (void).cxx_destruct;
- (void)transactionDidBegin:;
- (void)transactionWillBegin:;
- (void)transactionDidFinishWork:;
- (void)addTransactionWillBeginBlock:;
- (void)addTransactionDidBeginBlock:;
- (void)addTransactionDidFinishWorkBlock:;
- (void)addTransactionDidCompleteBlock:;
@end
