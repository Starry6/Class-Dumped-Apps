@interface CSJEcommerceUgenViewModel : CSJUgenViewModel
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) BUMaterialCacheModel cacheModel;
@property (nonatomic) NSDictionary currentSessionsParams;
- (void)p_loadNativeAdsFromCacheWithViewModelWithCacheModel:completion:;
- (id)currentSessionsParams;
- (id)initWithSlot:materialMeta:;
- (BOOL)isFirstRequest;
- (void)override_checkLoadDataTimesReachedLimit:isFirstScreen:;
- (void)override_loadDataWithCompletion:;
- (void)override_resetInfo;
- (id)override_ugenDataDict;
- (BOOL)p_handleResultWithCSJMaterialMeta:metasJson:;
- (id)p_loadMetaFromCacheWithKey:;
- (void)p_loadNativeAdsFromNetWorkWithViewModelWithCompletion:;
- (void)setCurrentSessionsParams:;
- (void)setIsFirstRequest:;
- (void).cxx_destruct;
- (void)setCacheModel:;
- (id)cacheModel;
@end
