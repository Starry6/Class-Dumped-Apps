@interface IMTypingTimer : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) <IMTypingTimerDelegate> delegate;
@property (nonatomic) IMHandle handle;
@property (nonatomic) NSDate beginDate;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL valid;
- (id)beginDate;
- (id)handle;
- (void)setDelegate:;
- (void)setTimer:;
- (double)timeoutInterval;
- (id)delegate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)timer;
- (void)invalidate;
- (void)timerCallback;
- (id)initWithHandle:beginDate:timeoutInterval:delegate:;
- (void)triggerTimeout;
+ (BOOL)shouldAdjustTimeoutIntervalForBeginDate;
@end
