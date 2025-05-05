@interface BUAdSlotMediation : NSObject
@property (nonatomic) BOOL mutedIfCan;
@property (nonatomic) BOOL bidNotify;
@property (nonatomic) NSString scenarioID;
@property (nonatomic) BUMSplashUserData splashUserData;
@property (nonatomic) UIWindow showInWindow;
- (BOOL)bidNotify;
- (BOOL)mutedIfCan;
- (void)setBidNotify:;
- (void)setMutedIfCan:;
- (void)setScenarioID:;
- (void)setShowInWindow:;
- (void)setSplashUserData:;
- (id)showInWindow;
- (id)splashUserData;
- (id)scenarioID;
- (void).cxx_destruct;
@end
