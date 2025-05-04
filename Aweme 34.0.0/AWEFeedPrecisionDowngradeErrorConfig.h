@interface AWEFeedPrecisionDowngradeErrorConfig : NSObject
@property (nonatomic) q commonCapacity;
@property (nonatomic) double commonExpireTimeDuration;
@property (nonatomic) q commonErrorCodeMaxCount;
@property (nonatomic) q capacity;
@property (nonatomic) double expireTimeDuration;
@property (nonatomic) q errorCodeMaxCount;
- (void)setCommonCapacity:;
- (void)setCommonExpireTimeDuration:;
- (void)setCommonErrorCodeMaxCount:;
- (long long)commonCapacityCalculated;
- (double)commonExpireTimeDurationCalculated;
- (void)setExpireTimeDuration:;
- (long long)commonErrorCodeMaxCountCalculated;
- (void)setErrorCodeMaxCount:;
- (long long)commonCapacity;
- (double)commonExpireTimeDuration;
- (long long)commonErrorCodeMaxCount;
- (id)initWithCapaticy:expireTimeDuration:errorCodeMaxCount:;
- (double)expireTimeDuration;
- (long long)errorCodeMaxCount;
- (id)init;
- (void)setCapacity:;
- (long long)capacity;
@end
