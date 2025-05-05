@interface ACSimpleRateLimiter : NSObject
@property (nonatomic) NSDate rateLimitingStartDate;
@property (nonatomic) NSLock instanceLock;
@property (nonatomic) NSMutableArray sortedActionDates;
@property (nonatomic) Q maximum;
@property (nonatomic) double timeInterval;
- (unsigned long long)maximum;
- (double)timeInterval;
- (void).cxx_destruct;
- (id)initWithMaximum:inTimeInterval:;
- (BOOL)reservePerformActionNow;
- (BOOL)isEmptyAfterFlushing;
- (id)rateLimitingStartDate;
- (unsigned long long)locked_indexOfFirstAfter:;
- (void)locked_removeDatesBefore:;
- (void)locked_addDate:;
- (id)instanceLock;
- (void)setInstanceLock:;
- (id)sortedActionDates;
- (void)setSortedActionDates:;
@end
