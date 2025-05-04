@interface AWEAntiAddictStrategyWeekFCModel : MTLModel
@property (nonatomic) q beginDay;
@property (nonatomic) q endDay;
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
@property (nonatomic) q maxTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxTimes;
- (long long)beginDay;
- (long long)endDay;
- (BOOL)isWithinWeek;
- (long long)endTime;
- (long long)beginTime;
- (BOOL)isValid;
+ (BOOL)isTimeTokenValid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
