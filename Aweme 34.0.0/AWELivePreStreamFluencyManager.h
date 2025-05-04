@interface AWELivePreStreamFluencyManager : NSObject
@property (nonatomic) BOOL enableLifeCycleOptimize;
@property (nonatomic) BOOL enableFluencyOptimizeV1;
@property (nonatomic) BOOL enablePlayerGlobalReuse;
- (BOOL)enableLifeCycleOptimize;
- (BOOL)enableFluencyOptimizeV1;
- (BOOL)enablePlayerGlobalReuse;
- (BOOL)getLifeCycleOptimizeConfig;
- (BOOL)getFluencyOptimizeV1Config;
- (BOOL)getPreStreamPlayerGlobalReuseOptimize;
- (void)setEnableLifeCycleOptimize:;
- (void)setEnableFluencyOptimizeV1:;
- (void)setEnablePlayerGlobalReuse:;
- (id)init;
+ (id)sharedInstance;
@end
