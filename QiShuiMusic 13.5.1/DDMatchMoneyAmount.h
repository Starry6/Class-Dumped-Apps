@interface DDMatchMoneyAmount : DDMatch
@property (nonatomic) NSString currency;
@property (nonatomic) double amount;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:;
- (double)amount;
- (id)currency;
@end
