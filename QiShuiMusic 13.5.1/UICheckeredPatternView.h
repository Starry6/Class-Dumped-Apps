@interface UICheckeredPatternView : UIView
@property (nonatomic) UIColor checkerColor;
- (BOOL)_canDrawContent;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updatePatternColor;
- (void)setCheckerColor:;
- (id)checkerColor;
@end
