@interface AWERVLVRightPanelContentView : UIView
@property (nonatomic) double topPadding;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView panelView;
- (id)panelView;
- (void)setPanelView:;
- (void)updatePanelView:title:;
- (double)topPadding;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupView;
- (void)setTopPadding:;
@end
