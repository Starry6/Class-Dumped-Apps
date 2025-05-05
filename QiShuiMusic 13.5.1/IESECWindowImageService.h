@interface IESECWindowImageService : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) NSMutableSet preloadImgs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreloadImgs:;
- (BOOL)p_preloadProductCoverImageIfNeeded:;
- (void)preloadFirstScreenProductImages:;
- (id)preloadImgs;
- (void)preloadProductImages:curIdx:;
- (void)updateProductImageTag:firstScreen:;
- (void)updateProductImageTagWithTabResponse:firstScreen:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
