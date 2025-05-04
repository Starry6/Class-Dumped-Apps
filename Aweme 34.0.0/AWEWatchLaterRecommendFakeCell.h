@interface AWEWatchLaterRecommendFakeCell : UICollectionViewCell
@property (nonatomic) UIView coverContainerView;
@property (nonatomic) UIView infoContainerView;
@property (nonatomic) UIView titleLabel;
@property (nonatomic) UIView watchTimeLabel;
- (id)infoContainerView;
- (void)setInfoContainerView:;
- (id)coverContainerView;
- (id)watchTimeLabel;
- (void)setCoverContainerView:;
- (void)setWatchTimeLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
