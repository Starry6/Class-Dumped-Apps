@interface AWEDetailMVMaterialSlotsCell : UICollectionViewCell
@property (nonatomic) AWEDetailMVMaterialSlotsCellModel cellModel;
@property (nonatomic) UILabel timeLabel;
- (void)setCellModel:;
- (void)configCellModel:;
- (void)setTimeLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)setupUI;
- (id)cellModel;
@end
