@interface AWEIMGCDTimerManager : NSObject
@property (nonatomic) HMDThreadSafeDictionary timerContainer;
- (void)cancelTimerWithName:;
- (void)scheduleTimerWithName:timeInterval:queue:repeats:action:;
- (id)timerContainer;
- (BOOL)existTimer:;
- (void)setTimerContainer:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
