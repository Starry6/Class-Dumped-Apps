@interface AWESearchHalfPanelTitleView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel title;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeHalfPanelBlock;
- (id)closeHalfPanelBlock;
- (void)closeHalfPanel;
- (void)updateTiTle:icon:;
- (void)setCloseHalfPanelBlock:;
- (id)init;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
