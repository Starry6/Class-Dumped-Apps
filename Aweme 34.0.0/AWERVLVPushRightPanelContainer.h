@interface AWERVLVPushRightPanelContainer : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)dismissPanel;
- (void)setupContent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupView;
- (void)setCloseButton:;
- (id)closeButton;
@end
