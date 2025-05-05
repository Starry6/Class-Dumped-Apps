@interface IESECStoreNewFlexDoubleColumnGoodsCell : UICollectionViewCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (nonatomic) IESECGoodsPriceLabel cachedCalculateLabel;
@property (nonatomic) IESECRelationSlideshowContainer slideshowContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObject:;
- (id)cachedCalculateLabel;
- (id)cardViewModel;
- (id)currentCoverImageView;
- (id)llView;
- (void)setCachedCalculateLabel:;
- (void)setLlView:;
- (id)slideshowContainer;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)cellBuilderWithViewModel:;
+ (id)cellBuilderWithViewModel:addToCartAction:calculateLabel:;
+ (double)heightWithViewModel:;
@end
