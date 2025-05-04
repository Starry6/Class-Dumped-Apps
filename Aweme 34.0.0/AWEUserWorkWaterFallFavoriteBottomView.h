@interface AWEUserWorkWaterFallFavoriteBottomView : UIView
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UIImageView authorAvatarIconView;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) @? rightTapActionBlock;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (void)setIconWith:;
- (void)updateWithModel:countString:;
- (void)setRightTapActionBlock:;
- (id)iconImageAdaptiveBigModeWith:;
- (id)likeIconSize;
- (double)countFontSizeAdaptiveBigMode;
- (id)authorAvatarIconView;
- (double)widthWithText:;
- (id)rightTapActionBlock;
- (void)rightActionButtonTapped:;
- (void)setAuthorAvatarIconView:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupSubviews;
- (id)countLabel;
- (void)setCountLabel:;
@end
