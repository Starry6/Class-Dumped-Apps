@interface AWEAdAvatarPendantView : UIView
@property (nonatomic) UILabel pendantText;
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) LOTAnimationView pendantIcon;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (id)initWithAwemeModel:;
- (id)pendantIcon;
- (id)pendantText;
- (void)startAnimationWithLayer:beginOrigin:;
- (void)setPendantText:;
- (void)setPendantIcon:;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setupUI;
@end
