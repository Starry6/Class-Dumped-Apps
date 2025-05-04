@interface AWEHPFirstPeriodLandingModel : MTLModel
@property (nonatomic) q period;
@property (nonatomic) q offet;
@property (nonatomic) q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)offet;
- (void)setOffet:;
- (long long)period;
- (void)setCount:;
- (long long)count;
- (void)setPeriod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
