@interface DJTableViewVMSegmentedCell : DJTableViewVMCell
@property (nonatomic) UISegmentedControl segmentedControl;
@property (nonatomic) DJTableViewVMSegmentedRow rowVM;
- (void)addConstrantToSegmentedControl;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)segmentValueDidChange:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)segmentedControl;
- (void)setSegmentedControl:;
@end
