@interface AWEFeedRelatedItemCellInfoView : UIView
@property (nonatomic) UIView authorContainer;
@property (nonatomic) UIView likeContainer;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView likeImageView;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel likeCountLabel;
@property (nonatomic) AWEFeedCollectionContainerLayoutConfig layoutConfig;
- (id)showStringFromNumber:;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (void)setLayoutConfig:;
- (id)likeImageView;
- (void)setLikeImageView:;
- (id)likeCountLabel;
- (void)updateLikeStyle:;
- (id)authorContainer;
- (id)likeContainer;
- (void)updateViewWithLayoutConfig;
- (id)likeImgName:;
- (void)updateConstraintsOfInfoView;
- (void)setAuthorContainer:;
- (void)setLikeContainer:;
- (void)setLikeCountLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)updateWithModel:;
- (id)layoutConfig;
@end
