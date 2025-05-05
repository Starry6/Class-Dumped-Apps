@interface PFUbiquityTransactionEntryLight : NSObject
@property (nonatomic) NSNumber transactionNumber;
@property (nonatomic) NSDate transactionDate;
- (id)init;
- (void)dealloc;
- (id)transactionNumber;
- (id)description;
- (void)setTransactionDate:;
- (id)transactionDate;
- (id)initWithTransactionEntry:ubiquityRootLocation:andGlobalIDCache:;
- (void)setTransactionNumber:;
@end
