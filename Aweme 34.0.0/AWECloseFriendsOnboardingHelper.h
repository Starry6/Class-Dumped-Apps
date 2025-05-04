@interface AWECloseFriendsOnboardingHelper : NSObject
@property (nonatomic) BOOL isCompleteCloseFriendsOnboarding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)updateBizAccountDegradeWithTime:;
- (BOOL)getCloseFriendsOnboardingFromStorage;
- (void)setIsCompleteCloseFriendsOnboarding:;
- (BOOL)isCompleteCloseFriendsOnboarding;
- (void)reloadSKIIOnboardingTimestamp;
- (void)updateSKIIOnboardingWithTime:;
- (void)didPrepareSettings;
- (id)getCompleteOnboardingKeyWithUserID:;
- (BOOL)enableRelationUpgrade;
- (void)handleSettingsResponseDictionary:;
- (void)updateCloseFriendsOnboardingWithSettingsDictionary:;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
