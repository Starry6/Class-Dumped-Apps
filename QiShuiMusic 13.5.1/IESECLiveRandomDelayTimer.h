@interface IESECLiveRandomDelayTimer : NSObject
@property (nonatomic) NSTimer delayTimer;
@property (nonatomic) NSMutableDictionary delayTimerManager;
- (long long)arc4randomFrom:to:;
- (id)delayTimerManager;
- (void)setDelayTimerManager:;
- (void)startDelayRequestWithType:completion:;
- (void)startRandomTimerWithDuration:completion:;
- (void)startRandomTimerWithMin:maxLimit:completion:;
- (void)startRandomTimerWithMin:maxLimit:uniqueKey:completion:;
- (id)delayTimer;
- (void)setDelayTimer:;
- (void)dealloc;
- (void)cancelTimer;
- (void).cxx_destruct;
@end
