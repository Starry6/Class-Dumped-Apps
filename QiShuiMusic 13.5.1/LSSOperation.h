@interface LSSOperation : NSOperation
@property (nonatomic) @? block;
@property (nonatomic) @? timeoutBlock;
@property (nonatomic) q state;
@property (nonatomic) double checkTimeInterval;
@property (nonatomic) double timeoutInSeconds;
@property (nonatomic) NSDate startDate;
@property (nonatomic) BOOL shouldBlockWhenTimeOut;
- (double)checkTimeInterval;
- (id)initWithBlock:timeoutBlock:timeoutInSeconds:shouldBlockWhenTimeOut:;
- (void)setCheckTimeInterval:;
- (void)setShouldBlockWhenTimeOut:;
- (BOOL)shouldBlockWhenTimeOut;
- (id)block;
- (id)startDate;
- (void)setTimeoutBlock:;
- (void)setStartDate:;
- (void)setState:;
- (void)finish;
- (double)timeoutInSeconds;
- (id)timeoutBlock;
- (void)main;
- (long long)state;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)setTimeoutInSeconds:;
+ (id)operationWithBlock:timeoutInSeconds:shouldBlockWhenTimeOut:;
+ (id)operationWithBlockAndTimeoutBlock:timeoutBlock:timeoutInSeconds:shouldBlockWhenTimeOut:;
@end
