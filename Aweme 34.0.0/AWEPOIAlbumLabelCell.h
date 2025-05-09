@interface AWEPOIAlbumLabelCell : UICollectionViewCell
@property (nonatomic) UIFont defaultFont;
@property (nonatomic) UILabel labelTitle;
@property (nonatomic) UILabel labelCount;
@property (nonatomic) UIView labelContainer;
@property (nonatomic) AWEPOIAlbumTabInfoModel labelModel;
@property (nonatomic) BOOL selectedStatus;
@property (nonatomic) @? selectedBlock;
- (void)setSelectedBlock:;
- (id)selectedBlock;
- (void)setLabelTitle:;
- (id)labelModel;
- (void)setLabelModel:;
- (void)changeToSelectStatus;
- (void)changeToUnSelectStatus;
- (void)onClickAction;
- (BOOL)selectedStatus;
- (void)setSelectedStatus:;
- (void)setLabelTitleText:;
- (void)setLabelCountText:;
- (void)updateWithModel:isSelected:;
- (void)setLabelCount:;
- (id)defaultFont;
- (id)initWithFrame:;
- (id)labelCount;
- (void).cxx_destruct;
- (void)setupUI;
- (id)labelTitle;
- (id)labelContainer;
- (void)setLabelContainer:;
- (void)setDefaultFont:;
@end
