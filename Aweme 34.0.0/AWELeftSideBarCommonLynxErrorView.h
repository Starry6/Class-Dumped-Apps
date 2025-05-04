@interface AWELeftSideBarCommonLynxErrorView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel errorLabel;
@property (nonatomic) UIButton reloadButton;
@property (nonatomic) @? reloadBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReloadButton:;
- (id)reloadButton;
- (void)reloadButtonClick;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)setReloadBlock:;
- (id)reloadBlock;
- (void)setupLayout;
- (id)errorLabel;
- (void)setErrorLabel:;
@end
