@interface IESliveAudioSeatPriorityChecker : NSObject
@property (nonatomic) NSMutableArray priorties;
@property (nonatomic) q currentPriority;
@property (nonatomic) NSString logName;
- (long long)currentShowingPriority;
- (id)priorties;
- (void)registerPriority:;
- (void)setCurrentPriority:;
- (void)setPriorties:;
- (id)init;
- (void)enable:;
- (void).cxx_destruct;
- (long long)currentPriority;
- (id)logName;
- (void)setLogName:;
- (void)disable:;
@end
