@interface HTSLiveFreqCtrlParams : IESLivePBBaseMessage
@property (nonatomic) q ieslive_expiredTime;
@property (nonatomic) NSInteger strategy;
@property (nonatomic) q limit;
@property (nonatomic) NSString key;
@property (nonatomic) q cur;
@property (nonatomic) q duration;
- (long long)ieslive_expiredTime;
- (void)setIeslive_expiredTime:;
+ (id)descriptor;
@end
