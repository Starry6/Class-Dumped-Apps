@interface IESECWinAuthorNewCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) IESECWinAuthorObject object;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) CAGradientLayer fixedLayer;
@property (nonatomic) CAGradientLayer animationLayer;
@property (nonatomic) IESECUIImageView livingIcon;
@property (nonatomic) IESECRelationFansClubBubbleView bubbleView;
@property (nonatomic) UIImageView goodAuthorImage;
@property (nonatomic) UILabel fansCountLabel;
@property (nonatomic) UIView splitView;
@property (nonatomic) UILabel ratePrefixLabel;
@property (nonatomic) UILabel rateLabel;
@property (nonatomic) IESECWinAuthorGuideInfoView guideInfoView;
@property (nonatomic) IESECWinAuthorManageInfoTopView topManageInfoView;
@property (nonatomic) IESECWinAuthorManageInfoBottomView bottomManageInfoView;
@property (nonatomic) UIImageView followBubbleImageView;
@property (nonatomic) IESECRelationMultipleFunctionsFollowView followView;
@property (nonatomic) IESECBubbleView fansClubGuideBubbleView;
@property (nonatomic) @? clickAvatarBlock;
@property (nonatomic) @? clickGoodAuthorBlock;
@property (nonatomic) @? clickAuthorNameIconBlock;
@property (nonatomic) @? clickBubbleBlock;
@property (nonatomic) @? clickNameLabelAreaBlock;
@property (nonatomic) @? clickOtherAreaBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ratePrefixLabel;
- (void)clickGoodAuthor;
- (id)goodAuthorImage;
- (void)showFollowBubbleWithCompletion:;
- (id)bottomManageInfoView;
- (void)clickAuthorNameIcon;
- (id)clickAuthorNameIconBlock;
- (id)clickAvatarBlock;
- (id)clickBubbleBlock;
- (id)clickGoodAuthorBlock;
- (id)clickNameLabelAreaBlock;
- (id)clickOtherAreaBlock;
- (void)configSubviewAlpha:;
- (id)createLayer;
- (id)fansClubGuideBubbleView;
- (id)fansCountLabel;
- (id)fixedLayer;
- (id)followBubbleImageView;
- (id)followView;
- (id)getAvatarView;
- (id)getFollowView;
- (id)getWindowTitle;
- (id)guideInfoView;
- (void)hideFansClubRedpackBubble;
- (id)livingIcon;
- (id)rateLabel;
- (void)setBottomManageInfoView:;
- (void)setClickAuthorNameIconBlock:;
- (void)setClickAvatarBlock:;
- (void)setClickBubbleBlock:;
- (void)setClickGoodAuthorBlock:;
- (void)setClickNameLabelAreaBlock:;
- (void)setClickOtherAreaBlock:;
- (void)setFansClubGuideBubbleView:;
- (void)setFansCountLabel:;
- (void)setFixedLayer:;
- (void)setFollowBubbleImageView:;
- (void)setFollowView:;
- (void)setGoodAuthorImage:;
- (void)setGuideInfoView:;
- (void)setLivingIcon:;
- (void)setRateLabel:;
- (void)setRatePrefixLabel:;
- (void)setSplitView:;
- (void)setTopManageInfoView:;
- (void)showBubbleView;
- (void)showFansClubBubbleView;
- (void)showFansClubRedpackBubbleWithCompletion:;
- (id)splitView;
- (id)topManageInfoView;
- (void)transferToLive;
- (void)transferToProfile;
- (void)transferToReputation;
- (void)updateDataWithObject:;
- (void)setObject:;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)object;
- (id)nameLabel;
- (void)stopAnimation;
- (void)setNameLabel:;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)animationLayer;
- (void)setAnimationLayer:;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)tapAction;
@end
