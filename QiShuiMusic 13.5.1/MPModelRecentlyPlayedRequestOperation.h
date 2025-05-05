@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation
- (void).cxx_destruct;
- (id)configurationForLoadingModelDataWithStoreURLBag:error:;
- (void)produceResponseWithLoadedOutput:completion:;
- (id)recentlyPlayedURLWithStoreURLBag:;
- (id)_produceResponseWithRecentlyPlayedArray:completion:;
@end
