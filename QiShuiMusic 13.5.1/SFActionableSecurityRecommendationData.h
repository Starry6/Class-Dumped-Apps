@interface SFActionableSecurityRecommendationData : NSObject
@property (nonatomic) SFAccountCellData accountCellData;
@property (nonatomic) WBSPasswordWarning warning;
@property (nonatomic) Q eligibleAccountModificationActions;
@property (nonatomic) NSArray items;
@property (nonatomic) NSExtension extension;
@property (nonatomic) BOOL isUpgradeToSignInWithAppleAvailable;
@property (nonatomic) <SFActionableSecurityRecommendationDataDelegate> delegate;
@property (nonatomic) BOOL didUpgradeToSignInWithApple;
@property (nonatomic) BOOL didUpgradeToStrongPassword;
- (id)items;
- (void)setDelegate:;
- (id)extension;
- (id)warning;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithAccountCellData:warning:delegate:;
- (id)cellForTableView:forCellType:;
- (void)_fetchEligibleAccountModificationActionsForSavedAccount:;
- (id)accountCellData;
- (unsigned long long)eligibleAccountModificationActions;
- (BOOL)isUpgradeToSignInWithAppleAvailable;
- (BOOL)didUpgradeToSignInWithApple;
- (void)setDidUpgradeToSignInWithApple:;
- (BOOL)didUpgradeToStrongPassword;
- (void)setDidUpgradeToStrongPassword:;
@end
