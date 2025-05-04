@interface AWEProfileCommonComponent : AWEProfileBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (BOOL)showPrivateAccountInfoView;
- (id)aAWEUserProfileTrackerAdapter;
- (void)openNameEditPage:;
- (void)openRelationListPage:type:enterFrom:enterMethod:;
- (void)openRelationListPage:type:enterFrom:enterMethod:extraQueryParams:;
- (void)openRelationListPage:userModel:type:enterFrom:enterMethod:extraQueryParams:;
- (void)openMyQRCode;
- (void)openEditProfilePageWithEnterFrom:;
- (void)openAddFriendPageWithDotType:dotCount:isAddGoldCollectShow:;
- (void)didTapPrivacyEnhanceLabel:;
- (void)didTapPraiseButton:;
- (void)copyIdString:context:;
- (void)showProfileMenuWithMethod:;
- (id)socialStatisticFormat:userModel:type:enterFrom:enterMethod:extraQueryParams:;
- (BOOL)isCurrentUser;
- (void)onInit;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEUserProfileTrackerAdapterClass;
@end
