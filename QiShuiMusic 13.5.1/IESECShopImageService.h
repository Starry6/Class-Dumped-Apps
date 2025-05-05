@interface IESECShopImageService : IESECShopService
@property (nonatomic) NSMutableSet preloadImgs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreloadImgs:;
- (void)p_preloadProductCoverImageIfNeeded:tabStyle:;
- (void)preloadFirstScreenProductImages:tabStyle:;
- (id)preloadImgs;
- (void)preloadProductImages:tabStyle:curIdx:;
- (void)updateProductImageTag:firstScreen:;
- (id)init;
- (void).cxx_destruct;
@end
