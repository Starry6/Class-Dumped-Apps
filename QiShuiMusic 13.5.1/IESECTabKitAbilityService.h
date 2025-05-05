@interface IESECTabKitAbilityService : IESECTabKitService
@property (nonatomic) IESECTabKitRouterParameters params;
@property (nonatomic) NSMutableDictionary abilityConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)abilityConfigForKey:;
- (id)abilityConfigs;
- (BOOL)enableAnnieXContainer;
- (BOOL)enableAnnieXWebCache;
- (BOOL)enableBtmCustomPage;
- (BOOL)enableCommonOptV1;
- (BOOL)enableNaPrefetchOpt;
- (BOOL)enablePreLoadAnnieOpt;
- (BOOL)enablePreProcessAnnieXModel;
- (BOOL)enableSplitContainerOpt;
- (BOOL)enableSplitTopBarOpt;
- (BOOL)enableSyncReload;
- (void)setAbilityConfigs:;
- (void)updateRouterParameters:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
