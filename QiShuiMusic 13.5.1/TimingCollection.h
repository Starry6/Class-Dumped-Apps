@interface TimingCollection : NSObject
- (id)init;
- (void)dealloc;
- (void)stopTimingForKey:;
- (void)startTimingForKey:;
- (double)totalTimeForKey:;
- (void)removeTimingForKey:;
- (id)description;
- (BOOL)hasKey:;
- (double)timingForKey:;
- (void)setTiming:forKey:;
- (BOOL)isValidTimingForKey:;
- (void)setStopTime:forKey:;
- (void)setStartTime:forKey:;
@end
