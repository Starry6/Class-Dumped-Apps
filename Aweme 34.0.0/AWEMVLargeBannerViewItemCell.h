@interface AWEMVLargeBannerViewItemCell : UICollectionViewCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) BDImageView bannerImageView;
@property (nonatomic) AWEGradientView bottomGradientView;
@property (nonatomic) @? imageFinishLoadAction;
- (id)descLabel;
- (void)setDescLabel:;
- (void)configWithCellModel:;
- (id)imageFinishLoadAction;
- (void)setImageFinishLoadAction:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
- (id)bannerImageView;
- (void)setBannerImageView:;
@end
