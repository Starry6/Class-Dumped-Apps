@interface AWEVideoCoverEditorTextTitleItemCell : UICollectionViewCell
@property (nonatomic) AWECoverTextTitleModel model;
@property (nonatomic) ACCAnimatedButton titleBtn;
@property (nonatomic) BOOL isSelected;
- (void)configWithModel:;
- (id)titleBtn;
- (void)setTitleBtn:;
- (void)setModel:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
