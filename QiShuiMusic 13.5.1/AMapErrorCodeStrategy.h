@interface AMapErrorCodeStrategy : NSObject
@property (nonatomic) NSDate beginDate;
@property (nonatomic) q minSecond;
@property (nonatomic) q maxSecond;
@property (nonatomic) NSNumber duration;
@property (nonatomic) @ userInfo;
- (BOOL)isVaild;
- (BOOL)isHitStrateg;
- (long long)maxSecond;
- (long long)minSecond;
- (void)setMaxSecond:;
- (void)setMinSecond:;
- (id)initWithDuration:;
- (id)beginDate;
- (id)userInfo;
- (void)setBeginDate:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)duration;
@end
