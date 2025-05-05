@interface SKProductStorePromotionController : NSObject
- (void)fetchStorePromotionVisibilityForProduct:completionHandler:;
- (void)updateStorePromotionVisibility:forProduct:completionHandler:;
- (void)fetchStorePromotionOrderWithCompletionHandler:;
- (void)updateStorePromotionOrder:completionHandler:;
- (void)_fetchProductsForPromotionOrder:completionHandler:;
- (void)_clearPromotionInfo;
+ (id)defaultController;
@end
