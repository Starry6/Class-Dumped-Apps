@interface PFUbiquityTransactionHistoryCache : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)addTransactionEntry:error:;
@end
