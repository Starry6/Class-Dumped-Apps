@interface AWEPadLeftSideBarWatchHistoryCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseImageView coverImageView;
@property (nonatomic) CAGradientLayer coverImageGradientLayer;
@property (nonatomic) UILabel cardTagView;
@property (nonatomic) AWEPadLSBWatchHistoryCardBottomView bottomView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)coverImageGradientLayer;
- (id)cardTagView;
- (void)setCoverImageGradientLayer:;
- (void)setupGradientLayer;
- (void)configViewWithCardType:;
- (void)updateCoverImageWithUrlArray:;
- (void)updateBottomText:;
- (void)setCardTagView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bottomView;
- (void)setupUI;
- (void)setBottomView:;
@end
