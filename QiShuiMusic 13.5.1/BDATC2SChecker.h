@interface BDATC2SChecker : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMutableArray logQueue;
- (void)C2S_processAlert:;
- (void)check3sLaterWithModel:;
- (BOOL)isValidLog:;
- (void)matchEventTrack:;
- (void)matchEventTrackWithValidLog:;
- (void)matchingFailedLogWithLogModel:result:shouldSend:realSend:;
- (id)init;
- (id)lock;
- (id)logQueue;
- (void)setLogQueue:;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedChecker;
@end
