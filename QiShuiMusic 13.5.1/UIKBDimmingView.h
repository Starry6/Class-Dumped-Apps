@interface UIKBDimmingView : UIView
@property (nonatomic) UIKBScreenTraits screenTraits;
- (void)drawRect:;
- (id)screenTraits;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setScreenTraits:;
- (void)refreshStyleForKeyplane:;
@end
