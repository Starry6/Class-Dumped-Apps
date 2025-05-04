@interface AWELiveLocalLifeComponentIconAnimationStrategy : MTLModel
@property (nonatomic) q totalShowTimes;
@property (nonatomic) q period;
@property (nonatomic) BOOL isNaturalTime;
@property (nonatomic) BOOL canCancelShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isNaturalTime;
- (long long)totalShowTimes;
- (BOOL)canCancelShow;
- (void)setTotalShowTimes:;
- (void)setIsNaturalTime:;
- (void)setCanCancelShow:;
- (long long)period;
- (void)setPeriod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
