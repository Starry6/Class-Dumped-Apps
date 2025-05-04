@interface AWEGrouponC2ToolBarMorePanelItemCell : UITableViewCell
@property (nonatomic) AWEGrouponC2ToolBarMorePanelItemModel itemModel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEGrouponAttributedLabel attributedLabel;
@property (nonatomic) UIImageView arrowImgView;
@property (nonatomic) BOOL isLargeMode;
- (id)itemModel;
- (void)setItemModel:;
- (id)arrowImgView;
- (void)setArrowImgView:;
- (void)updateCellWithModel:;
- (BOOL)isLargeMode;
- (id)iconImageModelWithEntranceConfigList:;
- (void)setIsLargeMode:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)attributedLabel;
- (void)setAttributedLabel:;
- (void)setupLayout;
@end
