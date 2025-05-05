@interface IESECShopProductsProductCell : UICollectionViewCell
@property (nonatomic) IESECShopProductsHybridContext context;
@property (nonatomic) IESECRelationGoodsCardViewModel viewModel;
@property (nonatomic) UIView<IESECShopGoodsCellProtocol> currentContentCell;
@property (nonatomic) IESECRelationSlideshowContainer slideshowContainer;
@property (nonatomic) @? addToCartAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addToCartAction;
- (id)currentContentCell;
- (void)doAnimationIfNeeded;
- (void)handleAddToCartButtonClick:cartButton:;
- (void)setAddToCartAction:;
- (BOOL)setCurrentCellType:;
- (id)slideshowContainer;
- (void)updateCurrentCellWithModel:;
- (void)updateView:forType:;
- (id)viewForType:;
- (id)viewModel;
- (id)context;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setContext:;
- (id).cxx_construct;
- (id)currentCell;
@end
