@interface AWEBatManActionsBaseCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEBatManActionsCellModel itemModel;
- (id)itemModel;
- (void)setItemModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
@end
