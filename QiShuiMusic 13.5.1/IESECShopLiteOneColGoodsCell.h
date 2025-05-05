@interface IESECShopLiteOneColGoodsCell : UICollectionViewCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (nonatomic) IESECGoodsPriceLabel cachedCalculateLabel;
@property (nonatomic) IESECRelationSlideshowContainer slideshowContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObject:;
- (id)llView;
- (void)setLlView:;
- (id)slideshowContainer;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)cellBuilderWithViewModel:;
+ (id)cellBuilderWithViewModel:addToCartAction:;
+ (double)priceWidthWithViewModel:;
@end
