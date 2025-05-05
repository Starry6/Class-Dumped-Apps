@interface CSJClickTriggerConfigModel : CSJBasicModel
@property (nonatomic) q clickTriggerType;
@property (nonatomic) double shakeStartTime;
@property (nonatomic) double shakeEndTime;
- (long long)clickTriggerType;
- (void)setClickTriggerType:;
- (void)setShakeEndTime:;
- (void)setShakeStartTime:;
- (double)shakeEndTime;
- (double)shakeStartTime;
- (id)init;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:;
@end
