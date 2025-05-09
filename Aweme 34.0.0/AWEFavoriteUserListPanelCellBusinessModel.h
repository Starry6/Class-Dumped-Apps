@interface AWEFavoriteUserListPanelCellBusinessModel : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString accountType;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEFavoriteListDataController dataController;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) q currentAwemeItemUserFollowStatus;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)enterFrom;
- (void)setDataController:;
- (BOOL)isFamiliarItemAwemeModel;
- (void)setIsFamiliarItemAwemeModel:;
- (long long)currentAwemeItemUserFollowStatus;
- (void)setCurrentAwemeItemUserFollowStatus:;
- (long long)prePageType;
- (long long)fromPageType;
- (BOOL)isFriends;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (BOOL)shouldShowMoreActionButton;
- (id)moreActionButtonSupportedFunctions;
- (BOOL)shouldShowDisclosureIndicator;
- (double)disclosureIndicatorIconSize;
- (void)setAccountType:;
- (id)accountType;
- (long long)channelID;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)initWithUserModel:;
- (id)userModel;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (id)dataController;
@end
