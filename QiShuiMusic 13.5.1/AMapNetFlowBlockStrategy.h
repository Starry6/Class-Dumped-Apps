@interface AMapNetFlowBlockStrategy : NSObject
@property (nonatomic) q minSecond;
@property (nonatomic) q maxSecond;
@property (nonatomic) double inPercent;
@property (nonatomic) NSString begin;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber percent;
@property (nonatomic) @ userInfo;
- (id)initWithBegin:duration:percent:;
- (double)inPercent;
- (BOOL)isHitStrateg;
- (long long)maxSecond;
- (long long)minSecond;
- (void)parserStrategy;
- (void)setInPercent:;
- (void)setMaxSecond:;
- (void)setMinSecond:;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)begin;
- (id)duration;
- (id)percent;
@end
