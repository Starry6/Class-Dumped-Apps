@interface AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel : MTLModel
@property (nonatomic) q beginDay;
@property (nonatomic) q endDay;
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
@property (nonatomic) q count;
@property (nonatomic) q duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)beginDay;
- (long long)endDay;
- (BOOL)isWithinWeek;
- (long long)endTime;
- (long long)count;
- (long long)beginTime;
- (BOOL)isValid;
- (long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
