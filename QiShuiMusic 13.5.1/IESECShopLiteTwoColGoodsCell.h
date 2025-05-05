@interface IESECShopLiteTwoColGoodsCell : UICollectionViewCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (nonatomic) IESECGoodsPriceLabel cachedCalculateLabel;
@property (nonatomic) IESECRelationSlideshowContainer slideshowContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObject:;
- (void)bindObject:itemWidth:;
- (id)llView;
- (void)setLlView:;
- (id)slideshowContainer;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)cellBuilderWithViewModel:addToCartAction:itemWidth:;
+ (id)cellBuilderWithViewModel:itemWidth:;
+ (double)heightWithViewModel:itemWidth:;
+ (double)priceWidthWithViewModel:;
@end
