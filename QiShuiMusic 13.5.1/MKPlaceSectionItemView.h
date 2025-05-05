@interface MKPlaceSectionItemView : MKViewWithHairline
@property (nonatomic) BOOL fullWidthHairline;
- (void)layoutMarginsDidChange;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged;
- (void)_updateHairlineInsets;
- (void)setFullWidthHairline:;
- (BOOL)isHairlineFullWidth;
@end
