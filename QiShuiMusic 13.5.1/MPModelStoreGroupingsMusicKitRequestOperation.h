@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation
- (void).cxx_destruct;
- (id)configurationForLoadingModelDataWithStoreURLBag:error:;
- (void)produceResponseWithLoadedOutput:completion:;
- (id)additionalURLRequestsWithStoreURLBag:;
- (id)additionalCatalogURLQueryItems;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:;
- (id)rootObjectIdentifierWithSubscriptionStatus:;
- (id)_produceResponseWithParser:results:error:;
- (id)catalogURLWithStoreURLBag:;
@end
