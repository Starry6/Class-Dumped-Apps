@interface IESLiveSaaSFollowGuidePopupView : IESLiveSaaSPopUpView
@property (nonatomic) UIView clearBackgroundView;
@property (nonatomic) UIView whiteBackgroundView;
@property (nonatomic) UIImageView headImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIButton followButton;
@property (nonatomic) IESLiveSaaSLiveRoomModel liveRoom;
@property (nonatomic) NSString hintText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) BOOL showToastWhenClose;
@property (nonatomic) BOOL isClickedFollowButton;
@property (nonatomic) @? followBlock;
- (void)setFollowBlock:;
- (id)clearBackgroundView;
- (void)didSetAttachingDIContext;
- (id)followBlock;
- (id)followButton;
- (id)headImageView;
- (id)hintText;
- (id)initWithFrame:liveRoom:hintText:buttonText:;
- (BOOL)isClickedFollowButton;
- (id)liveRoom;
- (void)pr_follow:;
- (void)setClearBackgroundView:;
- (void)setFollowButton:;
- (void)setHeadImageView:;
- (void)setIsClickedFollowButton:;
- (void)setLiveRoom:;
- (void)setShowToastWhenClose:;
- (void)setWhiteBackgroundView:;
- (BOOL)showToastWhenClose;
- (id)whiteBackgroundView;
- (id)buttonText;
- (void)show;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setButtonText:;
- (id)hintLabel;
- (void)setHintLabel:;
- (void)setUpConstraints;
- (void)setHintText:;
@end
