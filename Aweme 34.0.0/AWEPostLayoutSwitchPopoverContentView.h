@interface AWEPostLayoutSwitchPopoverContentView : UIView
@property (nonatomic) UIView topAccessibilityContainerView;
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UILabel subLabel;
@property (nonatomic) DUXSwitch layoutSwitch;
@property (nonatomic) @? valueChangedBlock;
- (double)leftOffset;
- (double)rightOffset;
- (double)middleInset;
- (id)layoutSwitch;
- (id)topAccessibilityContainerView;
- (void)setTopAccessibilityContainerView:;
- (void)setLayoutSwitch:;
- (double)topOffset;
- (id)init;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)mainLabel;
- (void)setMainLabel:;
- (void)setSwitchOn:;
- (void)setValueChangedBlock:;
- (id)valueChangedBlock;
- (void)setSubLabel:;
- (id)subLabel;
- (double)bottomOffset;
@end
