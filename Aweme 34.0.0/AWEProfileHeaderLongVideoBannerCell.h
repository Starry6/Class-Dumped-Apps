@interface AWEProfileHeaderLongVideoBannerCell : UICollectionViewCell
@property (nonatomic) AWEBDXWebViewController bannerViewController;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) NSString bannerScheme;
- (void)configWithContext:;
- (void)didTapCell:;
- (id)bannerScheme;
- (void)setBannerScheme:;
- (id)bannerViewController;
- (void)setBannerViewController:;
- (void)setTapGestureRecognizer:;
- (id)tapGestureRecognizer;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
