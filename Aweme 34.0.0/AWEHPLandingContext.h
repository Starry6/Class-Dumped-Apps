@interface AWEHPLandingContext : NSObject
@property (nonatomic) Q landingScene;
@property (nonatomic) AWEHPLandingStrategyModel<AWEHPLandingStrategyModelProtocol> strategyModel;
@property (nonatomic) AWEHPLandingStrategyAbilityImpl<AWEHPLandingStrategyAbility> strategyAbility;
- (void)setStrategyModel:;
- (id)strategyModel;
- (id)strategyAbility;
- (void)setLandingScene:;
- (unsigned long long)landingScene;
- (void)setStrategyAbility:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
