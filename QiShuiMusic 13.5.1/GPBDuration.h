@interface GPBDuration : GPBMessage
@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) q seconds;
@property (nonatomic) NSInteger nanos;
- (void)setTimeIntervalSince1970:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (id)initWithTimeInterval:;
- (double)timeIntervalSince1970;
- (id)initWithTimeIntervalSince1970:;
+ (id)descriptor;
@end
