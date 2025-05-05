@interface TMBPEAModule : TMModule
@property (nonatomic) NSDictionary modules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_allModuleClasses;
- (id)_bpeaConfig;
- (void)_setupConfig;
- (id)configFromDict:withClass:;
- (void)setupAPIControlConfig;
- (void)setupPresetAuthMap:;
- (void)setupPresetLimitConfig:;
- (void)updateWithConfig:;
- (void)start;
- (id)modules;
- (void).cxx_destruct;
- (void)setModules:;
@end
