@interface AWEUserListGeneralCellMoreActionView : UIView
@property (nonatomic) <AWEUserListGeneralCellConfigProtocol> config;
@property (nonatomic) UIButton moreActionButton;
@property (nonatomic) DUXActionPopover popover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initView;
- (void)onButtonClicked;
- (id)moreActionButton;
- (void)showPopoverWithTargetView:actions:;
- (void)setMoreActionButton:;
- (void)setConfig:;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (id)popover;
- (void).cxx_destruct;
- (void)setPopover:;
@end
