@interface PETAggregateState : NSObject
- (BOOL)checkIntegrity;
- (void)updateDistributionWithValue:forKey:keyLength:maxSampleSize:;
- (id)init;
- (void)enumerateCounters:distributions:;
- (id)initWithStorage:;
- (void)enumerateAndResetCounters:distributions:;
- (void)updateDistributionWithValue:forKey:maxSampleSize:;
- (void)updateCounterTo:forKey:;
- (void).cxx_destruct;
- (void)updateCounterTo:forKey:keyLength:;
- (id)initWithPath:;
- (void)reset;
- (id)description;
- (id)initInMemory;
- (void)incrementCounterBy:forKey:;
- (void)incrementCounterBy:forKey:keyLength:;
+ (unsigned char)hashForString:;
@end
