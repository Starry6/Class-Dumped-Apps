@interface AWENaviDuetGeneralConfig : NSObject
@property (nonatomic) NSString applyBackgroundKey;
@property (nonatomic) NSString applyActionPoseKey;
@property (nonatomic) BOOL shieldChangeFriends;
@property (nonatomic) BOOL shieldPublishToDaily;
@property (nonatomic) BOOL shieldChangeBackground;
@property (nonatomic) BOOL enableLimitedCache;
- (BOOL)enableLimitedCache;
- (id)applyActionPoseKey;
- (void)setApplyBackgroundKey:;
- (void)setApplyActionPoseKey:;
- (void)setShieldChangeFriends:;
- (void)setShieldPublishToDaily:;
- (void)setShieldChangeBackground:;
- (void)setEnableLimitedCache:;
- (id)applyBackgroundKey;
- (BOOL)shieldChangeFriends;
- (BOOL)shieldPublishToDaily;
- (BOOL)shieldChangeBackground;
- (id)init;
- (void).cxx_destruct;
@end
