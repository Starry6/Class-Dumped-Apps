@interface AWEAnchorAdditionHorizontalItemCell : UICollectionViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel markLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEAnchorAdditionCellModel cellModel;
- (void)setCellModel:;
- (id)markLabel;
- (void)setMarkLabel:;
- (BOOL)shouldShowMarkWithCellModel:;
- (void)updateUIWithCellModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)cellModel;
@end
