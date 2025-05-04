@interface AWETemplateMaterialSlotsCell : UICollectionViewCell
@property (nonatomic) AWETemplateMaterialSlotsCellModel cellModel;
@property (nonatomic) UIImageView plusIconView;
@property (nonatomic) UILabel timeLabel;
- (void)setCellModel:;
- (void)configCellModel:;
- (id)plusIconView;
- (void)setPlusIconView:;
- (void)setTimeLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)setupUI;
- (id)cellModel;
@end
