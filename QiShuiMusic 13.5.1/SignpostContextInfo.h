@interface SignpostContextInfo : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) I frameSeed;
@property (nonatomic) I contextId;
@property (nonatomic) I transactionSeed;
@property (nonatomic) Q earliestMCT;
@property (nonatomic) NSString executablePath;
@property (nonatomic) NSString processName;
- (id)executablePath;
- (unsigned int)contextId;
- (id)processName;
- (int)pid;
- (void).cxx_destruct;
- (unsigned int)frameSeed;
- (unsigned int)transactionSeed;
- (id)initWithContextInfoEvent:;
- (unsigned long long)earliestMCT;
@end
