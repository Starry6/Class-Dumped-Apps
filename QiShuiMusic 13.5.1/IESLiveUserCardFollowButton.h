@interface IESLiveUserCardFollowButton : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) UIView containView;
@property (nonatomic) UILabel followLabel;
@property (nonatomic) UIImageView followIcon;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> commonBgView;
@property (nonatomic) q state;
@property (nonatomic) q configTag;
@property (nonatomic) q followStatus;
@property (nonatomic) NSString functionType;
@property (nonatomic) BOOL hasJoinedFansClub;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainView:;
- (void)setFollowLabel:;
- (void)actionClicked;
- (id)buildLabel;
- (void)cancelFollow;
- (id)commonBgView;
- (void)configWithScene:;
- (void)configWithStore:;
- (void)configWithTag:isShowWhite:;
- (id)containView;
- (void)didAddFansClubSuccess;
- (void)didFollowSuccess;
- (void)didUnfollowSuccess;
- (id)followIcon;
- (id)followLabel;
- (long long)followStatus;
- (BOOL)hasJoinedFansClub;
- (void)refreshBorder:;
- (void)setCommonBgView:;
- (void)setFollowIcon:;
- (void)setFollowStatus:;
- (void)setHasJoinedFansClub:;
- (void)setToState:animate:;
- (void)setUpState:followStatus:;
- (void)setUpState:followStatus:animate:;
- (void)setupImage:withFlexImage:;
- (void)switchToNextState;
- (void)updateFollowStateAnimate:;
- (void)setToState:;
- (id)init;
- (void)setStore:;
- (void)layoutSubviews;
- (void)setState:;
- (void)setup;
- (long long)state;
- (void).cxx_destruct;
- (id)functionType;
- (id)store;
- (BOOL)shouldShow;
- (long long)configTag;
- (void)setConfigTag:;
- (void)setFunctionType:;
@end
