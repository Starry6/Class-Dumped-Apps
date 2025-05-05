@interface BDARVMPLargeCardView : BDARVCardView
@property (nonatomic) double titleScaleRate;
- (id)initWithSource:scaleRate:;
- (void)resizeLayout;
- (void)sendShowEvent;
- (void)sendShowOverEvent:;
- (void)setTitleScaleRate:;
- (void)setupSubview;
- (double)titleScaleRate;
- (void)updateUI:;
@end
