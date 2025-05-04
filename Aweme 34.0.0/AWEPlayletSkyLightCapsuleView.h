@interface AWEPlayletSkyLightCapsuleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) <AWEPlayletSkyLightCapsuleViewDelegate> delegate;
- (void)tapGestureAction:;
- (void)updateCapsuleViewTitle:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
