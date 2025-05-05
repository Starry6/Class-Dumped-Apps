@interface VEBlockChecker : NSObject
@property (nonatomic) double blockTime;
@property (nonatomic) NSMutableArray startTimes;
@property (nonatomic) IESMMObject blockCheckQueue;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSString anrMsg;
- (id)blockCheckQueue;
- (void)doBlock;
- (void)pushBlockCheck:;
- (id)anrMsg;
- (double)blockTime;
- (void)heartbeatLastWithStartTag:;
- (void)heartbeatWithStartTag:;
- (id)initWithBlockTime:;
- (void)popBlockCheck;
- (void)pushBlockCheck;
- (void)setAnrMsg:;
- (void)setBlockCheckQueue:;
- (void)setBlockTime:;
- (void)setStartTimes:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)startTimes;
@end
