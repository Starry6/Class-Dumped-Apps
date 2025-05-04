@interface AWEPOIVideoLandscapeEntryView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView rotationIcon;
@property (nonatomic) UILabel rotationText;
@property (nonatomic) @? landscapeStateChange;
- (void)onClickAction;
- (void)adjustLayout;
- (id)rotationIcon;
- (id)rotationText;
- (id)landscapeStateChange;
- (void)setLandscapeStateChange:;
- (void)setRotationIcon:;
- (void)setRotationText:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
@end
