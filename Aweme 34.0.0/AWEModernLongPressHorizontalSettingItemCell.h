@interface AWEModernLongPressHorizontalSettingItemCell : UICollectionViewCell
@property (nonatomic) UIImageView buttonIcon;
@property (nonatomic) UILabel buttonLabel;
@property (nonatomic) UIView customView;
@property (nonatomic) UIView separator;
@property (nonatomic) AWELongPressPanelBaseViewModel longPressPanelVM;
- (id)longPressPanelVM;
- (void)setLongPressPanelVM:;
- (void)setSeparator:;
- (id)separator;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void)setCustomView:;
- (id)customView;
- (void).cxx_destruct;
- (id)buttonIcon;
- (void)setButtonIcon:;
- (id)buttonLabel;
- (void)setSeparatorHidden:;
- (void)setButtonLabel:;
- (void)setUpUI;
- (void)updateUI:;
@end
