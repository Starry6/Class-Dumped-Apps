@interface PIAInterfaceCenter : NSObject
@property (nonatomic) # network;
@property (nonatomic) # userInfo;
@property (nonatomic) # applicationInfo;
@property (nonatomic) # hostSettings;
@property (nonatomic) # trackers;
@property (nonatomic) PIABiMapTable piaEnv;
- (Class)hostSettings;
- (id)piaEnv;
- (void)setHostSettings:;
- (void)setPiaEnv:;
- (id)init;
- (void)setNetwork:;
- (Class)network;
- (Class)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (Class)trackers;
- (void)setTrackers:;
- (Class)applicationInfo;
- (void)setApplicationInfo:;
+ (id)defaultCenter;
@end
