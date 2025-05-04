@interface AWEHPCommonLandingStrategy : NSObject
@property (nonatomic) <AWEHPLandingStrategyModelProtocol> strategyModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStrategyModel:;
- (id)strategyModel;
- (id)initWithLandingContext:;
- (BOOL)shouldStrategyEffect;
- (id)getTabLandingModel;
- (void).cxx_destruct;
@end
