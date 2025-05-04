@interface AWEShowMonetizeAOOPContext : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol><AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) q executedRules;
@property (nonatomic) <AWEShowMonetizeAOOPConfigProtocol> config;
- (id)createConfig;
- (long long)executedRules;
- (void)setExecutedRules:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (id)config;
- (void).cxx_destruct;
+ (BOOL)shouldCreateWithContainer:;
@end
