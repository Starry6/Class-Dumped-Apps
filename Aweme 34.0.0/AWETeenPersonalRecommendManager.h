@interface AWETeenPersonalRecommendManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)isPersonalRecommendSwitchOn;
- (id)personalRecommendSwitchParams;
- (void)setPersonalRecommendSwitch:;
- (void)fetchPrivacySetting;
- (BOOL)p_isPersonalRecommendSwitchOnForLogin;
- (void)setPersonalRecommendSwitch:push:;
- (BOOL)p_isPersonalRecommendSwitchOnForLogout;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
