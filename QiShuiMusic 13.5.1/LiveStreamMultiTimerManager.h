@interface LiveStreamMultiTimerManager : NSObject
@property (nonatomic) NSMutableDictionary timerList;
@property (nonatomic) NSLock lock;
- (void)cancelTimerWithName:;
- (void)schedualTimerWithIdentifier:interval:queue:repeats:action:;
- (void)setTimerList:;
- (id)timerList;
- (id)init;
- (void)cancelAllTimers;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)manager;
@end
