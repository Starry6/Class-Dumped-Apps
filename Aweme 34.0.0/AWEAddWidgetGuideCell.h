@interface AWEAddWidgetGuideCell : UICollectionViewCell
@property (nonatomic) UIImageView guideImageView;
@property (nonatomic) UIImageView contentImageView;
@property (nonatomic) AWEAddWidgetGuideModel model;
- (id)aAWEPadModuleAdapter;
- (void)setGuideImageView:;
- (id)guideImageView;
- (id)aAWEPadBizUIAdapter;
- (id)guideImageSize;
- (double)contentImageTopMargin;
- (id)contentImageSize;
- (BOOL)isIphoneLandscape;
- (void)doAnimation:show:;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)contentImageView;
- (void)setContentImageView:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;
@end
