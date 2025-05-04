@interface AWESearchAladdinBannerViewCell : AWESearchCachalotECommerceBaseCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView bannerPicture;
@property (nonatomic) UIImageView arrowPicture;
@property (nonatomic) UIView titleView;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseAladdinInfo aladdinInfoModel;
@property (nonatomic) CAShapeLayer bannerMaskLayer;
- (void)configWithModel:;
- (id)aladdinInfoModel;
- (id)bannerPicture;
- (id)bannerMaskLayer;
- (id)arrowPicture;
- (void)setAladdinInfoModel:;
- (void)setBannerPicture:;
- (void)setArrowPicture:;
- (void)setBannerMaskLayer:;
- (id)titleView;
- (void)setTitleView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
