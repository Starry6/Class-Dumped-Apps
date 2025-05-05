@interface ACRateLimiter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> instanceQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> vacuumQueue;
@property (nonatomic) NSMutableDictionary keyToSimpleRateLimiter;
@property (nonatomic) double vacuumTimeInterval;
@property (nonatomic) BOOL isVacuumInProgress;
@property (nonatomic) NSDate nextVacuumDate;
@property (nonatomic) Q maximum;
@property (nonatomic) double timeInterval;
- (unsigned long long)maximum;
- (double)timeInterval;
- (void).cxx_destruct;
- (id)initWithMaximum:inTimeInterval:;
- (BOOL)reservePerformActionForKey:;
- (id)simpleRateLimiterForKey:;
- (void)vacuumIfNeeded;
- (void)_vacuumQueue_vacuum;
- (BOOL)_vacuumQueue_vacuumKey:;
- (id)instanceQueue;
- (id)vacuumQueue;
- (id)keyToSimpleRateLimiter;
- (void)setKeyToSimpleRateLimiter:;
- (double)vacuumTimeInterval;
- (BOOL)isVacuumInProgress;
- (void)setIsVacuumInProgress:;
- (id)nextVacuumDate;
- (void)setNextVacuumDate:;
@end
