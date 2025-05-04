@interface AWEHPLandingStrategyRegisterModel : NSObject
@property (nonatomic) # strategyClass;
@property (nonatomic) NSString strategyType;
@property (nonatomic) Q landingScene;
- (void)setStrategyType:;
- (id)strategyType;
- (Class)strategyClass;
- (void)setStrategyClass:;
- (void)setLandingScene:;
- (unsigned long long)landingScene;
- (void).cxx_destruct;
@end
