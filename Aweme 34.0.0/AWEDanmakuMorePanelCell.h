@interface AWEDanmakuMorePanelCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) DUXBaseImageView icon;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) DUXBaseImageView arrowImageView;
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) AWEDanmakuMorePanelCellModel model;
- (void)updateTextColor:;
- (void)updateWithCellModel:;
- (void)updateCornerState:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)icon;
- (void)setSeparatorView:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)separatorView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setSwitchView:;
- (id)switchView;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)cellHeight;
@end
