@interface AWEAddMateGuideBannerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (id)bannerConfigForType:;
- (void)didClickBannerForType:enterFrom:;
- (void)didCloseBannerForType:enterFrom:;
- (BOOL)canShowBannerForType:;
- (void)didShowBannerForType:enterFrom:;
- (void)p_notMateCanSeeSettingChange:;
- (void)didClickBannerForType:enterFrom:extra:;
- (id)publishStoryStorageKey;
- (id)getRuleGroupForType:;
- (id)displayExitRuleForType:;
- (id)clickExitRuleForType:;
- (id)ruleGroupKeyForType:;
- (id)init;
+ (id)sharedInstance;
@end
