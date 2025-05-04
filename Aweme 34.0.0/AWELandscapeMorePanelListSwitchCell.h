@interface AWELandscapeMorePanelListSwitchCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) AWELandscapeMorePanelCellModel currentCellModel;
- (id)currentCellModel;
- (void)setCurrentCellModel:;
- (void)updateWithPanelCellModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setSwitchView:;
- (id)switchView;
@end
