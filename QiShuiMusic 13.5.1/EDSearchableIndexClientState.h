@interface EDSearchableIndexClientState : NSObject
@property (nonatomic) q transaction;
@property (nonatomic) NSNumber transactionValue;
@property (nonatomic) NSDate transactionDate;
@property (nonatomic) NSString systemBuildVersion;
- (void)setTransaction:;
- (long long)transaction;
- (id)init;
- (id)initWithDictionary:;
- (void)setSystemBuildVersion:;
- (void)addTransactionValueToAttributeSet:;
- (id)transactionValue;
- (void).cxx_destruct;
- (id)archiveRepresentation;
- (id)description;
- (void)setTransactionDate:;
- (id)systemBuildVersion;
- (id)transactionDate;
+ (id)clientState;
+ (id)transactionAttributeKey;
+ (id)clientStateFromData:;
@end
