@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval
@property (nonatomic) I transactionSeed;
@property (nonatomic) I swapId;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString processName;
@property (nonatomic) NSString executablePath;
- (id)executablePath;
- (id)processName;
- (int)pid;
- (void).cxx_destruct;
- (unsigned int)transactionSeed;
- (id)initWithTransactionSeedInterval:;
- (unsigned int)swapId;
@end
