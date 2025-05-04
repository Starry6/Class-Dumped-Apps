@interface AWEPlayInteractionSocialTagsCell : UICollectionViewCell
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? onClickContentView;
- (void)__setupUI;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)__onClickContentView;
- (id)onClickContentView;
- (void)updateSocialTagsCellWithIconURL:tagLabelText:shouldShowArrow:;
- (void)setOnClickContentView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
