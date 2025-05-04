@interface AWETeenAlbumGuideFullScreenView : UIView
@property (nonatomic) LOTAnimationView pointView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) BOOL isDismissing;
- (void)p_setupUI;
- (id)pointView;
- (void)setPointView:;
- (id)init;
- (void)setDescriptionLabel:;
- (BOOL)isDismissing;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setIsDismissing:;
- (void)dismissSelf;
@end
