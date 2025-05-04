@interface AWEFollowListVCDCell : UICollectionViewCell
@property (nonatomic) UIView vcdView;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton loadMoreButton;
@property (nonatomic) @? loadmoreButtonClickedBlock;
- (void)setLoadmoreButtonClickedBlock:;
- (id)loadmoreButtonClickedBlock;
- (void)configCell:hasLoadMoreButton:;
- (id)vcdView;
- (void)setVcdView:;
- (void)configFooterViewWihtText:hasLoadMoreButton:;
- (void)setLoadMoreButton:;
- (id)loadMoreButton;
- (void)loadMoreButtonClicked:;
- (void)prepareForReuse;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
@end
