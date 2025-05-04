@interface AWEECOMIMFootDescActionButtonsView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) NSArray itemButtonList;
@property (nonatomic) @? didClickItemBlock;
- (id)itemButtonList;
- (void)handleClickItemButton:;
- (void)setItemButtonList:;
- (id)didClickItemBlock;
- (void)updateWithActionItemList:;
- (void)setDidClickItemBlock:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
