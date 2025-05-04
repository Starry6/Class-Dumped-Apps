@interface AWEHPEditTitleBar : UIView
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) DUXButton closeButton;
- (void)newSetupUI;
- (void)oldSetupUI;
- (double)p_getCloseSize;
- (id)p_generateCloseButton;
- (id)p_generateTitleLabel;
- (double)p_getCloseImgSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)closeButton;
@end
