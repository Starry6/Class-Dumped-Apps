@interface AWESearchEcomModuleService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)merchandiseViewControllerClass;
- (Class)ecomSearchLynxBaseCellClass;
- (Class)ecomSearchLiveTabViewControllerClass;
- (id)cachalotMallViewController;
- (Class)topUserAdCellClass;
- (id)makeStoreViewController:;
- (BOOL)SRPOptimizeWithResponder:;
- (BOOL)isGeckoSearchDynamicWithScene:;
- (id)progressSearchDynamic:schema:searchScene:;
- (void)trackLynxLoadInfoWithModel:searchScene:;
- (id)createPhotoSearchLynxPipelinePreprocessClass:;
- (void)handleFlowPreRequest:;
- (void)handlePreRequest:responseBlock:completion:;
- (void)handleDiscardedPreRequest:;
- (id)chunkRequestManagerForIdentifier:;
- (id)preRequestForIdentifier:;
- (void)removeCSPChunkRequestManagerForIdentifier:;
- (void)ecomSearchShowComponentWithContainer:params:completion:;
- (id)searchGoodsScanViewControllerWithImage:extra:;
- (id)ecommerceSearchLynxMiddleViewController;
- (id)createModernFeedRecommWordsViewController:;
- (Class)cachalotMallViewControllerClass;
+ (id)sharedInstance;
@end
