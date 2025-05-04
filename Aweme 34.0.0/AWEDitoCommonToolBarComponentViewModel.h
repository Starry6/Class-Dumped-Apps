@interface AWEDitoCommonToolBarComponentViewModel : DitoComponentViewModel
@property (nonatomic) BOOL shouldUpdate;
@property (nonatomic) AWEDitoCommonToolBarComponentView cell;
@property (nonatomic) AWEDitoCommonToolBarDataModel dataModel;
- (void)setShouldUpdate:;
- (void)updateNode:;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)cell;
- (id)dataModel;
- (void)setCell:;
- (void)setDataModel:;
- (void)setNeedsRefresh;
- (BOOL)shouldUpdate;
@end
