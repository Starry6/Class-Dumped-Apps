@interface AWEAntiAddictToastFreqLimitModel : MTLModel
@property (nonatomic) q oncePerXDays;
@property (nonatomic) q noClickPeriod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)oncePerXDays;
- (long long)noClickPeriod;
- (void)setOncePerXDays:;
- (void)setNoClickPeriod:;
- (BOOL)isValid;
+ (id)JSONKeyPathsByPropertyKey;
@end
