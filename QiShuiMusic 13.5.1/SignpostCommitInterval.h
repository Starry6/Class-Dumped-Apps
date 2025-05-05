@interface SignpostCommitInterval : SignpostAnimationSubInterval
@property (nonatomic) I transactionSeed;
@property (nonatomic) Q threadID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString processName;
@property (nonatomic) NSString executablePath;
- (id)executablePath;
- (unsigned long long)threadID;
- (id)processName;
- (int)pid;
- (void).cxx_destruct;
- (id)initWithCommitInterval:;
- (unsigned int)transactionSeed;
@end
