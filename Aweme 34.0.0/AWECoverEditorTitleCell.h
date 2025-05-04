@interface AWECoverEditorTitleCell : UICollectionViewCell
@property (nonatomic) AWECoverTextTitleModel model;
@property (nonatomic) ACCAnimatedButton titleBtn;
@property (nonatomic) BOOL isSelected;
- (void)configWithModel:;
- (id)titleBtn;
- (void)setTitleBtn:;
- (void)setModel:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (id)model;
- (void).cxx_destruct;
- (void)setChosen:;
@end
