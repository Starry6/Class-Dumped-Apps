@interface AWESearchEcommerceLiveAutoPlayCellContoller : AWESearchLiveAutoPlayViewController
@property (nonatomic) AWESearchEcommerceSingleGoodsView ecommerceView;
@property (nonatomic) AWESearchEcommerceAnchorModel ecommerceModel;
@property (nonatomic) <AWESearchEcommerceLiveAutoPlayCellContollerDelegate> delegate;
- (void)setupSubViews;
- (id)ecommerceModel;
- (id)ecommerceView;
- (void)setEcommerceModel:;
- (void)onEcommerceViewClicked;
- (void)setEcommerceView:;
- (id)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)updateModel:;
@end
