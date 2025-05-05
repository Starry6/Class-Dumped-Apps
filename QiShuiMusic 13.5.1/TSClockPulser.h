@interface TSClockPulser : NSObject
@property (nonatomic) @? pulseHandler;
@property (nonatomic) BOOL useRealtimePriority;
@property (nonatomic) Q pulsePeriod;
@property (nonatomic) NSInteger pulseOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startPulsing;
- (BOOL)stopPulsing;
- (void)didChangeClockMasterForClock:;
- (void)didChangeLockStateTo:forClock:;
- (void)didBeginClockGrandmasterChangeForClock:;
- (void)didEndClockGrandmasterChangeForClock:;
- (id)initWithPulseClock:;
- (void)pulseThread;
- (id)pulseHandler;
- (void)setPulseHandler:;
- (BOOL)useRealtimePriority;
- (void)setUseRealtimePriority:;
- (unsigned long long)pulsePeriod;
- (void)setPulsePeriod:;
- (int)pulseOffset;
- (void)setPulseOffset:;
@end
