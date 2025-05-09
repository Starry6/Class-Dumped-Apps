@interface AWEGeneralTopUserAdCell : AWESearchCachalotECommerceBaseCell
@property (nonatomic) AWEGeneralTopUserView topUserView;
@property (nonatomic) UILabel topUserTitleLabel;
@property (nonatomic) UILabel topUserSubtitleLabel;
@property (nonatomic) AWEGeneralSearchModel searchModel;
@property (nonatomic) AWESearchUser searchUserModel;
@property (nonatomic) BOOL isLiveBlocked;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) AWESearchAllManager manager;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel searchMerchandiseModel;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentThemeStyle;
- (id)logPassback;
- (void)setLogPassback:;
- (void)configWithModel:;
- (void)configUI;
- (void)enterLiveRoom;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (void)unfollowUser:;
- (id)searchMerchandiseModel;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (void)setSearchMerchandiseModel:;
- (void)addCornerRadiusWithView:corners:cornerRadii:;
- (void)trackAdEndorseUserCard:refer:;
- (void)followUser:;
- (void)followButtonTapped;
- (void)setIsLiveBlocked:;
- (BOOL)isLiveBlocked;
- (void)liveBlockAudienceNotication:;
- (id)topUserView;
- (id)topUserTitleLabel;
- (id)topUserSubtitleLabel;
- (id)searchUserModel;
- (void)p_configUIInfoModel:;
- (void)userViewTapped;
- (void)brandRankLabelTapped;
- (void)avatarImageTapped;
- (void)setTopUserView:;
- (void)setTopUserTitleLabel:;
- (void)setTopUserSubtitleLabel:;
- (void)setSearchUserModel:;
- (void)setManager:;
- (void)addObserver;
- (id)initWithFrame:;
- (id)manager;
- (void).cxx_destruct;
- (id)componentView;
- (void)setSearchModel:;
- (id)searchModel;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
