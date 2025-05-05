@interface IESLiveAnchorMultiLinkNotificationPlayerItemView : UIView
@property (nonatomic) UIView avatarView;
@property (nonatomic) UILabel followTagView;
@property (nonatomic) UILabel inviterTagView;
@property (nonatomic) UIImageView genderImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView matchTagContainerView;
- (id)genderImageView;
- (id)descLabel;
- (id)followTagView;
- (id)initWithPlayer:needBetaing:nameMaxWidth:showFanTicket:showInviterTag:anchorMatchTags:;
- (id)inviterTagView;
- (id)matchTagContainerView;
- (void)setDescLabel:;
- (void)setFollowTagView:;
- (void)setGenderImageView:;
- (void)setInviterTagView:;
- (void)setMatchTagContainerView:;
- (id)tagContentSize4Text:font:;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
@end
