@interface AWEIMEntryView : AWEIMPanelView
@property (nonatomic) UIButton entryButton;
@property (nonatomic) UIImageView entryIcon;
- (void)p_setupUI;
- (void)setEntryIcon:;
- (id)entryButton;
- (void)setEntryButton:;
- (void)renderWithViewModel:;
- (void)handleClickAction:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)entryIcon;
@end
