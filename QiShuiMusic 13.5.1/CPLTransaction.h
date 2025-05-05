@interface CPLTransaction : NSObject
@property (nonatomic) NSString identifier;
- (void)dealloc;
- (void)endTransaction;
- (id)identifier;
- (id)initWithIdentifier:description:keepPower:;
- (void).cxx_destruct;
+ (unsigned long long)transactionCount;
+ (void)endTransactionWithIdentifier:;
+ (id)transactions;
+ (void)beginTransactionWithIdentifier:description:keepPower:;
+ (id)newTransactionWithIdentifier:description:keepPower:;
@end
