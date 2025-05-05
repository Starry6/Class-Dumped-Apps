@interface IESLiveVSGiftSectionView : UIView
@property (nonatomic) IESLiveVSGiftPanelViewModel viewModel;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSMutableArray cells;
@property (nonatomic) NSMutableDictionary cellMap;
@property (nonatomic) UIView<IESLiveVSGiftSectionCell> lastCell;
@property (nonatomic) double currentLineWidth;
- (void)p_dismissCells:;
- (void)p_displayCells:;
- (void)bindViewModel;
- (void)p_appendCell:;
- (void)p_reloadViewIfNeeded;
- (void)setCurrentLineWidth:;
- (void)setLastCell:;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)cells;
- (void)setupUI;
- (void)setCells:;
- (id)initWithFrame:viewModel:;
- (double)currentLineWidth;
- (id)lastCell;
- (void)setCellMap:;
- (id)cellMap;
@end
