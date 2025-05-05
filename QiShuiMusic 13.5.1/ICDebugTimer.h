@interface ICDebugTimer : NSObject
@property (nonatomic) NSDate startingDate;
@property (nonatomic) double elapsedTime;
- (void)setElapsedTime:;
- (void)start;
- (double)elapsedTime;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (id)startingDate;
- (void)setStartingDate:;
+ (id)debugTimerForClass:;
+ (void)enableTimersForClass:;
@end
