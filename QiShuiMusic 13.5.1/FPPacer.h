@interface FPPacer : NSObject
@property (nonatomic) @? eventBlock;
- (void)signal;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void)setEventBlock:;
- (void).cxx_destruct;
- (void)_fire;
- (void)_scheduleNextFire;
- (id)initWithName:queue:minFireInterval:;
- (double)_computeNextTime;
- (id)eventBlock;
@end
