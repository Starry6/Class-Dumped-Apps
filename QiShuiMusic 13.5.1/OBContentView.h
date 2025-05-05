@interface OBContentView : UIView
@property (nonatomic) UIColor lightColor;
@property (nonatomic) UIColor darkColor;
@property (nonatomic) BOOL aboveHeaderLayout;
@property (nonatomic) BOOL customizedBackgroundColor;
@property (nonatomic) UIView bleedView;
- (void)setBackgroundColor:;
- (id)darkColor;
- (id)lightColor;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)initWithFrame:aboveHeaderLayout:;
- (void)setBleedView:;
- (id)_defaultColorForCurrentTraitCollection;
- (BOOL)_colorIsDefault:;
- (id)bleedView;
- (void)setLightColor:;
- (void)setDarkColor:;
- (BOOL)aboveHeaderLayout;
- (void)setAboveHeaderLayout:;
- (BOOL)customizedBackgroundColor;
- (void)setCustomizedBackgroundColor:;
@end
