@interface AWEMorePanelCell : UICollectionViewCell
@property (nonatomic) BDPMorePanelItem item;
@property (nonatomic) UIButton itemButton;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) <AWEMorePanelCellDelegate> delegate;
- (void)reuseWithItem:;
- (void)onItemButtonTap:;
- (id)convertName:;
- (id)textLabel;
- (id)delegate;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTextLabel:;
- (void)setupUI;
- (id)itemButton;
- (void)setItemButton:;
@end
