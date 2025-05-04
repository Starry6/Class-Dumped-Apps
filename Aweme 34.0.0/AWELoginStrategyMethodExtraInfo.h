@interface AWELoginStrategyMethodExtraInfo : MTLModel
@property (nonatomic) BOOL isLogoutResetFrequency;
@property (nonatomic) q frequencyUpdateCycle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLogoutResetFrequency;
- (void)setIsLogoutResetFrequency:;
- (long long)frequencyUpdateCycle;
- (void)setFrequencyUpdateCycle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
