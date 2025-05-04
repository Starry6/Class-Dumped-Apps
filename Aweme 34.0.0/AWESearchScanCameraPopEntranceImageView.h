@interface AWESearchScanCameraPopEntranceImageView : UIView
@property (nonatomic) BDImageView image;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView imageTitleZone;
@property (nonatomic) UILabel imageTitle;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) AWESearchScanCameraPopEntranceImageModel model;
@property (nonatomic) <AWESearchScanCameraPopEntranceImageViewDelegate> delegate;
- (void)configUI;
- (id)imageTitleZone;
- (void)pushSearchScanResult:trackParams:;
- (void)setImageTitleZone:;
- (void)setModel:;
- (id)image;
- (id)delegate;
- (id)blurView;
- (void)setImage:;
- (void)setBlurView:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)updateWithModel:;
- (id)imageTitle;
- (void)setImageTitle:;
- (void)tapGestureHandler:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
