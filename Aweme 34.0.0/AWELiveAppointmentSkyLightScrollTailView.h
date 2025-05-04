@interface AWELiveAppointmentSkyLightScrollTailView : UICollectionReusableView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) @? tailViewDidClick;
- (void)tapGestureAction;
- (id)tailViewDidClick;
- (void)updateSpacing:;
- (void)setTailViewDidClick:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)contentView;
- (id)label;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setIconImageView:;
- (void)setupViews;
@end
