@interface AWEModernLongPressInteractiveItemCell : UICollectionViewCell
@property (nonatomic) UIView buttonView;
@property (nonatomic) UIImageView buttonIcon;
@property (nonatomic) UILabel buttonLabel;
@property (nonatomic) UIView customView;
@property (nonatomic) AWELongPressPanelBaseViewModel longPressPanelVM;
- (id)longPressPanelVM;
- (void)setLongPressPanelVM:;
- (id)initWithFrame:;
- (id)buttonView;
- (void)setHighlighted:;
- (void)setCustomView:;
- (id)customView;
- (void).cxx_destruct;
- (id)buttonIcon;
- (void)setButtonView:;
- (void)setButtonIcon:;
- (id)buttonLabel;
- (void)setButtonLabel:;
- (void)setUpUI;
- (void)updateUI:;
@end
