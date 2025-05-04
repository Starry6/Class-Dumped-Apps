@interface AWELiveLocalLifeAggPreloadConfig : MTLModel
@property (nonatomic) q ageLimit;
@property (nonatomic) q randomTime;
@property (nonatomic) BOOL enable;
@property (nonatomic) q delayLevel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)delayLevel;
- (long long)randomTime;
- (void)setRandomTime:;
- (void)setDelayLevel:;
- (BOOL)enable;
- (void)setEnable:;
- (long long)ageLimit;
- (void)setAgeLimit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
