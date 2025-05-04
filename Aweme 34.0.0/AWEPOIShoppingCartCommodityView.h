@interface AWEPOIShoppingCartCommodityView : NSObject
@property (nonatomic) UIImageView commodityImageView;
- (id)commodityImageView;
- (void)startAnimationWithContainerView:startPoint:finishPoint:controlPoint:imageUrl:imageViewSize:animationDuration:;
- (void)cancelAnimationWithContainerView:;
- (void)preloadImageWithImageUrl:;
- (void)setCommodityImageView:;
- (void).cxx_destruct;
@end
