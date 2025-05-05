@interface EDSearchableIndexVerifier : NSObject
@property (nonatomic) NSObject<OS_os_activity> indexVerificationActivity;
@property (nonatomic) <EDSearchableIndexVerifierDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q signpostID;
- (void)setDataSource:;
- (id)_missingTransactionIDsFromTransactionIDs:;
- (unsigned long long)signpostID;
- (id)initWithDataSource:;
- (id)_failingSamples:tester:;
- (void)setIndexVerificationActivity:;
- (id)_verifyDataSamples:;
- (id)indexVerificationActivity;
- (id)dataSource;
- (void).cxx_destruct;
- (void)verifyDataSamplesWithCompletionHandler:scheduler:;
- (void)_addFailingSamples:toResultDictionary:;
- (id)_verifySamples:;
- (unsigned long long)_findMissingTransactionIDs:dataSource:;
+ (id)log;
+ (id)signpostLog;
@end
