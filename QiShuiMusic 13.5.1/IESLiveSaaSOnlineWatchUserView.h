@interface IESLiveSaaSOnlineWatchUserView : UIView
@property (nonatomic) UILabel onlineWatchUser;
@property (nonatomic) UIView backgroundContainer;
@property (nonatomic) UIView divideLine;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIButton enterBtn;
@property (nonatomic) BOOL showPV;
@property (nonatomic) @? enterAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableNewStyles;
- (id)onlineWatchUser;
- (void)didForceUpdateToOrientation:;
- (id)divideLine;
- (id)enterBtn;
- (id)initWithFrame:showPV:enterListAction:hasRankList:DIContext:;
- (id)pluginLayoutContentSize;
- (void)refreshUserCount:;
- (void)setDivideLine:;
- (void)setEnterBtn:;
- (void)setOnlineWatchUser:;
- (void)setShowPV:;
- (void)setupBgColorIfNeeded;
- (void)setupBgContainerView:;
- (void)setupWatchUser;
- (void)showAudienceList:;
- (BOOL)showPV;
- (void)updateMessageLabel:;
- (id)viewType;
- (void)setEnterAction:;
- (id)enterAction;
- (id)backgroundContainer;
- (void).cxx_destruct;
- (void)setBackgroundContainer:;
- (id)bgView;
- (void)setBgView:;
@end
