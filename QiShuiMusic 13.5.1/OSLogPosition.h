@interface OSLogPosition : NSObject
@property (nonatomic) q precision;
@property (nonatomic) NSDate date;
@property (nonatomic) double offset;
- (long long)precision;
- (id)initWithDate:;
- (double)offset;
- (id)date;
- (void).cxx_destruct;
- (id)initWithEventSource:timeIntervalSinceEnd:;
- (id)initWithTimeIntervalSinceLatestBoot:;
@end
