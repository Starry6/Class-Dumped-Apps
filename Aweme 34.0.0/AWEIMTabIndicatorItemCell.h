@interface AWEIMTabIndicatorItemCell : UICollectionViewCell
@property (nonatomic) AWEIMTabIndicatorModel model;
@property (nonatomic) AWEIMTabIndicatorViewConfig config;
@property (nonatomic) BOOL isLayoutSetup;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView tailingImageView;
@property (nonatomic) AWEIMUnreadDotView dotView;
- (id)tailingImageView;
- (BOOL)isLayoutSetup;
- (void)setIsLayoutSetup:;
- (void)p_setupLayoutIfNeeded:config:;
- (void)p_observeModel:;
- (void)p_configUnreadView:config:;
- (void)configDotViewStyleWithModel:config:;
- (void)remakeDotViewWithModel:config:;
- (void)configWithModel:config:targetPageView:;
- (void)setTailingImageView:;
- (void)setModel:;
- (void)setConfig:;
- (id)config;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)dotView;
- (void)setDotView:;
@end
