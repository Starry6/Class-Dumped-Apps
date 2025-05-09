@interface AWEUserListPanelCellItem : NSObject
@property (nonatomic) q cellType;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString accountType;
@property (nonatomic) BOOL hasMoreActions;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) q currentAwemeItemUserFollowStatus;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL isECommerceBoostInfoPanel;
@property (nonatomic) q rewardAmount;
@property (nonatomic) Q rewardType;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) UIColor onlineDotBGColor;
@property (nonatomic) BOOL isShowSourceType;
@property (nonatomic) BOOL isLightMode;
@property (nonatomic) BOOL shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
@property (nonatomic) @? customRightButtonAction;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (void)setReferString:;
- (void)setExtraParams:;
- (id)enterMethod;
- (id)enterFrom;
- (id)extraParams;
- (void)setAwemeID:;
- (BOOL)isFamiliarItemAwemeModel;
- (void)setIsFamiliarItemAwemeModel:;
- (long long)currentAwemeItemUserFollowStatus;
- (void)setCurrentAwemeItemUserFollowStatus:;
- (id)awemeID;
- (long long)rewardAmount;
- (BOOL)isLightMode;
- (void)setRewardAmount:;
- (void)setRewardType:;
- (unsigned long long)rewardType;
- (void)setIsLightMode:;
- (BOOL)isFriends;
- (void)setIsFriends:;
- (void)setHasMoreActions:;
- (void)setShouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions:;
- (void)setIsShowSourceType:;
- (id)onlineDotBGColor;
- (BOOL)hasMoreActions;
- (BOOL)isShowSourceType;
- (BOOL)shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
- (BOOL)isECommerceBoostInfoPanel;
- (void)setIsECommerceBoostInfoPanel:;
- (void)setOnlineDotBGColor:;
- (id)customRightButtonAction;
- (void)setCustomRightButtonAction:;
- (long long)cellType;
- (void)setCellType:;
- (void)setAccountType:;
- (id)accountType;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:;
@end
