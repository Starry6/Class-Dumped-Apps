@interface AWETeenDiscoverGradientView : UIView
@property (nonatomic) UIView leftGradientView;
@property (nonatomic) UIView rightGradientView;
@property (nonatomic) @? themeDidChangeBlock;
- (void)p_setupUI;
- (void)awe_themeDidChange:;
- (id)leftGradientView;
- (id)rightGradientView;
- (void)setLeftGradientView:;
- (void)setRightGradientView:;
- (void)p_rotated:;
- (id)themeDidChangeBlock;
- (void)setThemeDidChangeBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
