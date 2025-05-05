@interface UIInterfaceActionVisualStyleViewState : NSObject
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) UIScreen screen;
@property (nonatomic) UIColor tintColor;
- (id)init;
- (id)traitCollection;
- (id)tintColor;
- (id)screen;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPropertiesFromTopLevelView:;
- (id)copyWithTraitCollection:;
- (id)copyWithScreen:;
- (void)_collectStateFromView:;
- (void)_collectStateFromScreen:;
- (void)_collectStateFromVisualStyleViewState:;
- (BOOL)_stateEqualToVisualStyleViewState:;
@end
