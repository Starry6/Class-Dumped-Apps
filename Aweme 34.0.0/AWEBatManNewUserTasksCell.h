@interface AWEBatManNewUserTasksCell : UIView
@property (nonatomic) UIImageView iconImg;
@property (nonatomic) UILabel CellTitleLbl;
@property (nonatomic) UILabel CellSubTitleLbl;
@property (nonatomic) UIImageView benefitsCellBgImgView;
@property (nonatomic) BOOL isSelected;
- (id)iconImg;
- (void)setIconImg:;
- (void)setTasksModel:withSelected:;
- (id)CellTitleLbl;
- (id)CellSubTitleLbl;
- (void)setTaskCellSelectedWithTitle:;
- (void)setTaskCellUnusableWithTitle:;
- (void)setTaskCellUnfinishedWithTitle:;
- (id)benefitsCellBgImgView;
- (void)setBenefitsCellBgImgView:;
- (void)setCellTitleLbl:;
- (void)setCellSubTitleLbl:;
- (void)setIsSelected:;
- (id)init;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)createUI;
@end
