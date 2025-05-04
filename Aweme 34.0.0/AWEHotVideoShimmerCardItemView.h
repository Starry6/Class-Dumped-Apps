@interface AWEHotVideoShimmerCardItemView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView longBottomView;
@property (nonatomic) UIView shortBottomView;
- (id)longBottomView;
- (id)shortBottomView;
- (void)setLongBottomView:;
- (void)setShortBottomView:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
@end
