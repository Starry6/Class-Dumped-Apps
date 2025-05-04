@interface AWEHPNewBadgeManager : NSObject
@property (nonatomic) <AWEPzEngineProtocol> engine;
@property (nonatomic) NSDictionary badgeTypeMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createTask;
- (void)tryShowBadgeWithTask:canShowCallBack:;
- (void)trackShowBadgeWithModel:;
- (void)trackHideBadgeWithModel:;
- (BOOL)badgeMigratePizza;
- (BOOL)badgeStrategyEnable;
- (id)badgeTypeMap;
- (void)setBadgeTypeMap:;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
