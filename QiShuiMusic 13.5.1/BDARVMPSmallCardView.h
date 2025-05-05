@interface BDARVMPSmallCardView : BDARVCardView
@property (nonatomic) double titleWidth;
@property (nonatomic) double screenRate;
- (id)initWithSource:scaleRate:;
- (void)resizeLayout;
- (double)screenRate;
- (void)sendShowEvent;
- (void)sendShowOverEvent:;
- (void)setScreenRate:;
- (void)setTitleWidth:;
- (void)setupSubview;
- (double)titleWidth;
- (void)updateUI:;
@end
