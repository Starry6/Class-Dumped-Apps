@interface AWEGuestStatContainerViewHolder : AWEBaseListViewHolder
@property (nonatomic) UIButton naviBackButton;
@property (nonatomic) DUXDivider naviDivider;
@property (nonatomic) IESSegmentedControl segmentedControl;
- (void)setupViewHolder;
- (void)updateSegmentedControl:;
- (void)updateSegmentedControlLayout;
- (id)naviBackButton;
- (id)naviDivider;
- (void)updateDividerLayout;
- (void)setNaviBackButton:;
- (void)setNaviDivider:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)segmentedControl;
- (void)setSegmentedControl:;
@end
