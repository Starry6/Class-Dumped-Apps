@interface AWEHPTabLandingRollBackComponentFactory : NSObject
@property (nonatomic) NSMutableDictionary configToComponent;
- (id)getRollBackComponentWithConfig:;
- (void)registerAllRollBackComponent;
- (id)configToComponent;
- (void)registerComponentWithConfigClass:componentClass:;
- (void)setConfigToComponent:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
