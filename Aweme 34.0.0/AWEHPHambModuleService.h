@interface AWEHPHambModuleService : HTSService
@property (nonatomic) AWEHPHambManager hambManager;
@property (nonatomic) NSNumber combineResponseVersion;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (id)getConfigWithNames:;
- (void)addChecker:;
- (double)lastValidCombineResponseVersion;
- (void)updateLastValidCombineResponseVersion:;
- (id)hambManager;
- (id)combineResponseVersion;
- (void)setHambManager:;
- (void)setCombineResponseVersion:;
- (void)removeListener:;
- (void)addListener:;
- (void).cxx_destruct;
@end
