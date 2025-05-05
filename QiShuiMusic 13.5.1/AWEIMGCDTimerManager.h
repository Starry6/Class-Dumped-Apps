@interface AWEIMGCDTimerManager : NSObject
@property (nonatomic) IESIMSaaSThreadSafeDictionary timerContainer;
- (void)cancelTimerWithName:;
- (BOOL)existTimer:;
- (void)scheduleTimerWithName:timeInterval:queue:repeats:action:;
- (void)setTimerContainer:;
- (id)timerContainer;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
