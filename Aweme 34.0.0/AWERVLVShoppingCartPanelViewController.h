@interface AWERVLVShoppingCartPanelViewController : AWERVMetaPanelViewController
@property (nonatomic) UIView container;
@property (nonatomic) UIView titleContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIScrollView placeHolderScrollView;
@property (nonatomic) AWERelatedVideoHunterContainer hunterView;
@property (nonatomic) @? metaInfoCloseBlock;
- (void)setHunterView:;
- (id)hunterView;
- (void)setMetaInfoCloseBlock:;
- (void)refreshWithEntranceInfo:;
- (id)panelContentView;
- (id)metaInfoCloseBlock;
- (id)placeHolderScrollView;
- (void)setPlaceHolderScrollView:;
- (void)setContainer:;
- (id)container;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)closeButtonTapped;
- (void)setTitleContainer:;
- (void)setupContentView;
- (id)titleContainer;
@end
