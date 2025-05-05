@interface TRIPBTimestamp : TRIPBMessage
@property (nonatomic) NSDate date;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) q seconds;
@property (nonatomic) NSInteger nanos;
- (void)setTimeIntervalSince1970:;
- (id)initWithDate:;
- (id)date;
- (void)setDate:;
- (double)timeIntervalSince1970;
- (id)initWithTimeIntervalSince1970:;
+ (id)descriptor;
@end
