@interface AWEMusicCollectionSectionHeaderView : UIView
@property (nonatomic) AWEMusicSectionHeaderLabel titleLabel;
@property (nonatomic) UIButton addButton;
@property (nonatomic) @? addButtonClickBlock;
- (void)configSubviews;
- (void)setAddButtonClickBlock:;
- (void)refreshWithTitle:countStr:showAdd:;
- (id)addButtonClickBlock;
- (void)addButtonClick:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithCoder:;
- (id)addButton;
- (void)setAddButton:;
@end
