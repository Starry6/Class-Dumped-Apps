@interface AWEExperienceStrategyInitManager : NSObject
@property (nonatomic) NSMutableArray launchStrategyInstanceList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playWith:;
- (void)onApplicationLaunch;
- (void)registerLaunchStrategy;
- (id)launchStrategyInstanceList;
- (id)launchStrategyList;
- (void)setLaunchStrategyInstanceList:;
- (id)init;
- (unsigned long long)moduleNames;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
