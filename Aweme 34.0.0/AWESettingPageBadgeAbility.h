@interface AWESettingPageBadgeAbility : NSObject
@property (nonatomic) AWESettingPageBadgeManager weakBadgeManager;
@property (nonatomic) AWESettingPageBaseController weakController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weakBadgeManager;
- (id)weakController;
- (void)showDotBadgeWithCompletionBlock:;
- (id)initWithController:badgeManager:;
- (void)setWeakBadgeManager:;
- (void)setWeakController:;
- (void).cxx_destruct;
@end
