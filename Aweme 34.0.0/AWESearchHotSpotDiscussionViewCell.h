@interface AWESearchHotSpotDiscussionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIButton likeButton;
@property (nonatomic) AWECommentModel model;
@property (nonatomic) <AWESearchHotSpotDiscussionViewControllerDelegate> delegate;
- (void)configWithModel:;
- (void)configureUI;
- (void)likeButtonTapped:;
- (void)updateModelDiggState:;
- (void)commentTapped:;
- (void)setModel:;
- (id)delegate;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)likeButton;
- (void)setLikeButton:;
+ (id)cellSizeWithModel:;
+ (double)cellHeightWithModel:;
+ (double)cellWidthWithModel:;
+ (id)labelWithModel:;
+ (double)likeButtonWidthWithModel:;
+ (id)generateAttributeStringWithText:isIndepent:;
+ (id)formatLikeNumber:;
+ (id)createLikeButton;
+ (id)likeNumberLabelWithModel:;
+ (id)createTitleLabel;
@end
