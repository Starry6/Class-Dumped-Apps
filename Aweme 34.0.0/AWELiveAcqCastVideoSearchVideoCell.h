@interface AWELiveAcqCastVideoSearchVideoCell : UICollectionViewCell
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEFeedVideoTagView videoTagView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView diggImageView;
@property (nonatomic) UIImageView hotSpotTagImageView;
@property (nonatomic) UIImageView mixVideoIconView;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel diggCountLabel;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) @? didClickMix;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)userNameLabel;
- (id)userImageView;
- (void)setUserImageView:;
- (void)setUserNameLabel:;
- (id)diggCountLabel;
- (void)setDiggCountLabel:;
- (id)diggImageView;
- (void)setDiggImageView:;
- (id)videoTagView;
- (void)setVideoTagView:;
- (id)hotSpotTagImageView;
- (void)setHotSpotTagImageView:;
- (id)mixVideoIconView;
- (void)setMixVideoIconView:;
- (id)appendMixVideoTagIfNeededWithAweme:attributedString:;
- (void)updateCoverImage:;
- (id)didClickMix;
- (void)setDidClickMix:;
- (void)setModel:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setupUI;
- (void)updateWithModel:;
+ (BOOL)enableMixVideo:;
@end
